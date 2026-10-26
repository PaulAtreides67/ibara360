/* YMZ770C "AMMS-A" sound chip, after MAME 0.289 src/devices/sound/ymz770.cpp and
 * mpeg_audio.cpp (BSD-3-Clause; Olivier Galibert, R. Belmont, MetalliC). Only the
 * 770 parts. The arithmetic and its order are MAME's, so the chip samples are
 * bit-identical to MAME's (tools/ymzref runs MAME's own sources on the same writes).
 * Changes that keep the result: idct32 runs the j loop outside (each sum still adds
 * its terms in j order) and skips zero inputs (adding +-0 never changes a sum that
 * started at +0); the cosine table is fixed (ymz_cos.inc, from glibc) so every host
 * gets the same bits.
 *
 * The CPU side only queues register writes stamped with the SH-3 cycle (and a mark at
 * every vblank); ymz_run() replays them against the chip in time order, so the chip
 * can run on another thread. Chip sample k is at cycle sum(CPU_HZ / rate).
 *
 * Test 68 (ibara360's sound page): the chip state is a type with two of them, the board's (zm) and a sound test's
 * (zt, fed only by the host through ymz_test_cmd: songs and voices played on their own, the board's chip never sees
 * them). With ymz_scaled set the host's mix comes out in ymz_out: each channel's share times its phrase's category
 * gain (music / effects / voices, ymz_gain_main) and factor (ymz_phrase_k), the test chip's sample (ymz_gain_test)
 * added while it plays and the board's chip faded out meanwhile. The sink still gets the chip's own sample, so the
 * sound checks and hashes see what MAME makes; with ymz_scaled 0 (host/pc, the tools) nothing changes at all.
 */
#include <string.h>
#include "cv1k.h"
#include "state.h"

/* ======================================================================== */
/* AMM (MPEG-1 layer II variant) decoder: mpeg_audio.cpp                    */
/* ======================================================================== */

#include "ymz_tables.inc"

/* cos(i * (2j + 1) * pi / 64) as glibc computes it, stored [j][i] for the j-outer idct */
static const double cos_t[32][32] = {
#include "ymz_cos.inc"
};

typedef struct {
	int sampling_rate, last_frame_number, param_index, cbr_param_index;
	int channel_count, total_bands, joint_bands;
	int band_param[2][32];
	int scfsi[2][32];
	int scf[2][3][32];
	double amp_values[2][3][32];
	double bdata[2][3][32];
	double subbuffer[2][32];
	double audio_buffer[2][32 * 32];
	int audio_buffer_pos[2];
	int cur, limit, err;
} amm_t;

static const u8 *amm_base;

static int do_gb(int *pos, int count)
{
	int v = 0;
	for (int i = 0; i != count; i++) {
		v <<= 1;
		if (amm_base[*pos >> 3] & (0x80 >> (*pos & 7)))
			v |= 1;
		(*pos)++;
	}
	return v;
}

/* MAME throws limit_hit; here gb() sets err and returns 0, and the callers stop at
 * the same points MAME's exception would leave from */
static int gb(amm_t *m, int count)
{
	if (m->cur + count > m->limit) {
		m->err = 1;
		return 0;
	}
	return do_gb(&m->cur, count);
}

static void amm_clear(amm_t *m)
{
	memset(m->audio_buffer, 0, sizeof m->audio_buffer);
	m->audio_buffer_pos[0] = 16 * 32;
	m->audio_buffer_pos[1] = 16 * 32;
}

static void read_header_amm(amm_t *m, int layer25)
{
	int ammsl = gb(m, 1);
	int full_packets_count = gb(m, 4);
	int srate_index = gb(m, 2);
	m->sampling_rate = srate_index + 4 * layer25;
	int last_packet_frame_id = gb(m, 2);
	int stereo_mode = gb(m, 2);
	int stereo_mode_ext = gb(m, 2);
	if (ammsl) {
		m->last_frame_number = 36;
		m->param_index = m->cbr_param_index;
		gb(m, 3);
	} else {
		m->last_frame_number = 3 * full_packets_count + last_packet_frame_id;
		m->param_index = gb(m, 3);
	}
	gb(m, 1);

	m->channel_count = stereo_mode != 3 ? 2 : 1;
	m->total_bands = total_band_counts[m->param_index];
	m->joint_bands = m->total_bands;
	if (stereo_mode == 1)
		m->joint_bands = joint_band_counts[stereo_mode_ext];
	if (m->joint_bands > m->total_bands)
		m->joint_bands = m->total_bands;
}

static int get_band_param(amm_t *m, int band)
{
	int bit_count = band_parameter_index_bits_count[m->param_index][band];
	int index = gb(m, bit_count);
	return band_parameter_indexed_values[m->param_index][band][index];
}

static void read_band_params(amm_t *m)
{
	int band = 0;
	while (band < m->joint_bands) {
		for (int chan = 0; chan < m->channel_count; chan++)
			m->band_param[chan][band] = get_band_param(m, band);
		band++;
	}
	while (band < m->total_bands) {
		int val = get_band_param(m, band);
		m->band_param[0][band] = val;
		m->band_param[1][band] = val;
		band++;
	}
	while (band < 32) {
		m->band_param[0][band] = 0;
		m->band_param[1][band] = 0;
		band++;
	}
}

static void read_scfci(amm_t *m)
{
	memset(m->scfsi, 0, sizeof m->scfsi);
	for (int band = 0; band < m->total_bands; band++)
		for (int chan = 0; chan < m->channel_count; chan++)
			if (m->band_param[chan][band])
				m->scfsi[chan][band] = gb(m, 2);
}

static void read_band_amplitude_params(amm_t *m)
{
	memset(m->scf, 0, sizeof m->scf);
	for (int band = 0; band < m->total_bands; band++)
		for (int chan = 0; chan < m->channel_count; chan++)
			if (m->band_param[chan][band]) {
				int val;
				switch (m->scfsi[chan][band]) {
				case 0:
					m->scf[chan][0][band] = gb(m, 6);
					m->scf[chan][1][band] = gb(m, 6);
					m->scf[chan][2][band] = gb(m, 6);
					break;
				case 1:
					val = gb(m, 6);
					m->scf[chan][0][band] = val;
					m->scf[chan][1][band] = val;
					m->scf[chan][2][band] = gb(m, 6);
					break;
				case 2:
					val = gb(m, 6);
					m->scf[chan][0][band] = val;
					m->scf[chan][1][band] = val;
					m->scf[chan][2][band] = val;
					break;
				case 3:
					m->scf[chan][0][band] = gb(m, 6);
					val = gb(m, 6);
					m->scf[chan][1][band] = val;
					m->scf[chan][2][band] = val;
					break;
				}
			}
}

static void build_amplitudes(amm_t *m)
{
	memset(m->amp_values, 0, sizeof m->amp_values);
	for (int band = 0; band < m->total_bands; band++)
		for (int chan = 0; chan < m->channel_count; chan++)
			if (m->band_param[chan][band])
				for (int step = 0; step < 3; step++)
					m->amp_values[chan][step][band] = scalefactors[m->scf[chan][step][band]];
}

static void read_band_value_triplet(amm_t *m, int chan, int band)
{
	double buffer[3];
	int band_idx = m->band_param[chan][band];
	switch (band_idx) {
	case 0:
		m->bdata[chan][0][band] = 0;
		m->bdata[chan][1][band] = 0;
		m->bdata[chan][2][band] = 0;
		return;
	case 1:
	case 2:
	case 4: {
		int modulo = band_infos[band_idx].modulo;
		int val = gb(m, band_infos[band_idx].cube_bits);
		buffer[0] = val % modulo;
		val = val / modulo;
		buffer[1] = val % modulo;
		val = val / modulo;
		buffer[2] = val % modulo;
		break;
	}
	default: {
		int bits = band_infos[band_idx].bits;
		buffer[0] = gb(m, bits);
		buffer[1] = gb(m, bits);
		buffer[2] = gb(m, bits);
		break;
	}
	}

	double scale = 1 << (band_infos[band_idx].bits - 1);
	m->bdata[chan][0][band] = ((buffer[0] - scale) / scale + band_infos[band_idx].offset) * band_infos[band_idx].scale;
	m->bdata[chan][1][band] = ((buffer[1] - scale) / scale + band_infos[band_idx].offset) * band_infos[band_idx].scale;
	m->bdata[chan][2][band] = ((buffer[2] - scale) / scale + band_infos[band_idx].offset) * band_infos[band_idx].scale;
}

static void build_next_segments(amm_t *m, int step)
{
	int band = 0;
	while (band < m->joint_bands) {
		for (int chan = 0; chan < m->channel_count; chan++) {
			read_band_value_triplet(m, chan, band);
			double amp = m->amp_values[chan][step][band];
			m->bdata[chan][0][band] *= amp;
			m->bdata[chan][1][band] *= amp;
			m->bdata[chan][2][band] *= amp;
		}
		band++;
	}
	/* MAME's second loop also tests joint_bands, so it never runs: bands from
	 * joint_bands to total_bands are neither read nor zeroed (kept as in MAME;
	 * mono AMM has joint_bands == total_bands) */
	while (band < 32) {
		m->bdata[0][0][band] = 0;
		m->bdata[0][1][band] = 0;
		m->bdata[0][2][band] = 0;
		m->bdata[1][0][band] = 0;
		m->bdata[1][1][band] = 0;
		m->bdata[1][2][band] = 0;
		band++;
	}
}

static void idct32(const double *input, double *output)
{
	double s[32];
	for (int i = 0; i < 32; i++)
		s[i] = 0;
	for (int j = 0; j < 32; j++) {
		double in = input[j];
		if (in == 0)
			continue;
		const double *c = cos_t[j];
		for (int i = 0; i < 32; i++)
			s[i] += in * c[i];
	}
	for (int i = 0; i < 32; i++)
		output[i] = s[i];
}

static void resynthesis(const double *input, double *output)
{
	memset(output, 0, 32 * sizeof output[0]);
	for (int j = 0; j < 64 * 8; j += 64) {
		for (int i = 0; i < 16; i++)
			output[i] += input[i + j] * synthesis_filter[i + j] - input[32 - i + j] * synthesis_filter[32 + i + j];
		output[16] -= input[16 + j] * synthesis_filter[32 + 16 + j];
		for (int i = 17; i < 32; i++)
			output[i] -= input[32 - i + j] * synthesis_filter[i + j] + input[i + j] * synthesis_filter[32 + i + j];
	}
}

static void scale_and_clamp(const double *input, s16 *output, int step)
{
	for (int i = 0; i < 32; i++) {
		double val = input[i] * 32768 + 0.5;
		s16 cval;
		if (val <= -32768)
			cval = -32768;
		else if (val >= 32767)
			cval = 32767;
		else
			cval = (s16)(int)val;
		*output = cval;
		output += step;
	}
}

/* returns 0 where MAME's decode_mpeg2 would have left by limit_hit */
static int decode_mpeg2(amm_t *m, s16 *output, int *output_samples)
{
	*output_samples = 0;
	build_amplitudes(m);
	int frame_number = 0;
	for (int upper_step = 0; upper_step < 3; upper_step++)
		for (int middle_step = 0; middle_step < 4; middle_step++) {
			build_next_segments(m, upper_step);
			if (m->err)
				return 0;
			for (int lower_step = 0; lower_step < 3; lower_step++) {
				for (int chan = 0; chan < m->channel_count; chan++)
					memcpy(m->subbuffer[chan], m->bdata[chan][lower_step], 32 * sizeof m->subbuffer[0][0]);
				for (int chan = 0; chan < m->channel_count; chan++) {
					double resynthesis_buffer[32];
					idct32(m->subbuffer[chan], m->audio_buffer[chan] + m->audio_buffer_pos[chan]);
					resynthesis(m->audio_buffer[chan] + m->audio_buffer_pos[chan] + 16, resynthesis_buffer);
					scale_and_clamp(resynthesis_buffer, output + chan, m->channel_count);
					m->audio_buffer_pos[chan] -= 32;
					if (m->audio_buffer_pos[chan] < 0) {
						memmove(m->audio_buffer[chan] + 17 * 32, m->audio_buffer[chan], 15 * 32 * sizeof m->audio_buffer[chan][0]);
						m->audio_buffer_pos[chan] = 16 * 32;
					}
				}
				output += 32 * m->channel_count;
				*output_samples += 32;
				frame_number++;
				if (frame_number == m->last_frame_number)
					return 1;
			}
		}
	return 1;
}

static int amm_decode_buffer(amm_t *m, int *pos, int limit, s16 *output, int *output_samples,
	int *sample_rate, int *channels, int atbl)
{
	if (limit - *pos < 16)
		return 0;
	m->cur = *pos;
	m->limit = limit;
	m->err = 0;
	m->cbr_param_index = atbl;
	unsigned sync = (unsigned)do_gb(&m->cur, 12);

retry_sync:
	while (sync != 0xfff && m->cur < limit)
		sync = ((sync << 1) | (unsigned)do_gb(&m->cur, 1)) & 0xfff;
	if (limit - m->cur < 4)
		return 0;

	int variant = do_gb(&m->cur, 3);
	if (variant != 2 && variant != 6) {        /* accepted = AMM only: variants 2 and 6 */
		m->cur -= 3;
		sync = ((sync << 1) | (unsigned)do_gb(&m->cur, 1)) & 0xfff;
		goto retry_sync;
	}

	read_header_amm(m, variant == 2);
	if (m->err)
		return 0;
	read_band_params(m);
	read_scfci(m);
	read_band_amplitude_params(m);
	if (m->err)
		return 0;
	if (m->last_frame_number && !decode_mpeg2(m, output, output_samples))
		return 0;

	*pos = m->cur;
	*sample_rate = sample_rates[m->sampling_rate];
	*channels = m->channel_count;
	return 1;
}

/* ======================================================================== */
/* YMZ770C: ymz770.cpp                                                      */
/* ======================================================================== */

typedef struct {
	u8 pan, pan_delay, pan1, pan1_delay, volume_target, volume_delay, volume2;
} voice_params;

typedef struct {
	voice_params current, latch;
	u16 phrase;
	s32 volume;
	u8 loop;
	u8 pending, is_playing, is_paused, last_block;
	u8 cat;                  /* test 68: the playing phrase's YMZ_CAT_* and factor (set where it starts) */
	u16 gk;
	amm_t dec;
	s16 output_data[0x1000];
	int output_remaining, output_ptr, atbl, pptr;
} ymz_channel;

typedef struct {
	u32 delay;
	u16 sequence, timer, stopchan;
	u8 loop;
	u32 offset;
	u8 bank, is_playing, is_paused;
} ymz_sequence;

#define YMZ_CHANNELS 16     /* MAME has 16 (for the 774); the 770 addresses 8 */

/* Test 68: the chip's state as a type, for two of them: the board's (zm, the game's writes) and the sound test's (zt,
 * the host's own writes: ibara360's sound page plays songs and voices on it, so the game's chip never sees them) */
typedef struct {
	const u8 *rom;
	u32 rom_bytes;
	u32 sclock;
	u8 cur_reg, mute, doen, vlma, vlma1, bsl, cpl;
	ymz_channel ch[YMZ_CHANNELS];
	ymz_sequence seq[8];
} ymz_chip;

static ymz_chip zm, zt;
static u8 t_vol0;           /* test 68: the test chip's channel 0 volume in place of its sequences' (0: theirs) */

int ymz_rate_mode;          /* 0 = MAME 0.289 (rate from each AMM block), 1 = fixed 16 kHz (MAME before 2026-03) */

/* Test 68: what the host makes of the mix (never the chip: ymz_run's sink still gets the chip's sample, which the
 * checks hash): each playing phrase's category and factor, the categories' gains (Q15) for the board's chip and the
 * test chip, the sum both make into ymz_out */
u8 ymz_phrase_cat[256];
u16 ymz_phrase_k[256];
volatile s32 ymz_gain_main[YMZ_CATS], ymz_gain_test[YMZ_CATS];
volatile int ymz_scaled;
volatile int ymz_test_busy;
s32 ymz_out;
static s32 g_main[YMZ_CATS], g_test[YMZ_CATS]; /* the gains now, ramping to the targets */

static u8 rom_byte(u32 offset) { return zm.rom[offset % zm.rom_bytes]; }
static u32 get_phrase_offs(int phrase)
{
	return (u32)zm.rom[4 * phrase + 1] << 16 | (u32)zm.rom[4 * phrase + 2] << 8 | zm.rom[4 * phrase + 3];
}
static u32 get_seq_offs(int sqn)
{
	return (u32)zm.rom[4 * sqn + 1 + 0x400] << 16 | (u32)zm.rom[4 * sqn + 2 + 0x400] << 8 | zm.rom[4 * sqn + 3 + 0x400];
}

static void internal_reg_write(ymz_chip *z, u8 reg, u8 data)
{
	if (reg < 0x40) {
		switch (reg) {
		case 0x00:
			z->mute = data & 1;
			z->doen = data >> 1 & 1;
			break;
		case 0x01:
			z->vlma = data;
			break;
		case 0x02:
			z->bsl = data & 7;
			z->cpl = data >> 4 & 7;
			break;
		default:
			break;
		}
	} else if (reg < 0x60) {
		ymz_channel *c = &z->ch[reg >> 2 & 0x07];
		if (reg == 0x41 && z == &zt && t_vol0) /* test 68: the track's level as the game's driver sets it */
			data = t_vol0;
		switch (reg & 0x03) {
		case 0:
			c->phrase = data;
			break;
		case 1:
			c->volume = 128 << 17;
			c->latch.volume2 = data;
			break;
		case 2:
			c->latch.pan = (u8)(data << 3);
			break;
		case 3:
			/* both KON bits set = "keep playing" */
			if ((data & 6) == 2 || ((data & 6) == 6 && !c->is_playing)) {
				c->pending = 1;
				c->is_playing = 1;
				c->last_block = 0;
			} else if ((data & 6) == 0)
				c->is_playing = 0;
			c->loop = (data & 1) ? 255 : 0;
			break;
		}
	} else if (reg >= 0x80) {
		ymz_sequence *s = &z->seq[reg >> 4 & 0x07];
		switch (reg & 0x0f) {
		case 0:         /* SQSN */
			s->sequence = data;
			break;
		case 1:         /* SQON SQLP */
			if ((data & 6) == 2 || ((data & 6) == 6 && !s->is_playing)) {
				s->offset = get_seq_offs(s->sequence);
				s->delay = 0;
				s->is_playing = 1;
			} else if ((data & 6) == 0 && s->is_playing) {
				s->is_playing = 0;
				for (int i = 0; i < 8; i++)
					if (s->stopchan & (1 << i))
						z->ch[i].is_playing = 0;
			}
			s->loop = data & 1;
			break;
		case 2:         /* TMRH */
			s->timer = (u16)((s->timer & 0x00ff) | (data << 8));
			break;
		case 3:         /* TMRL */
			s->timer = (u16)((s->timer & 0xff00) | data);
			break;
		case 6:         /* SQOF */
			s->stopchan = data;
			break;
		default:
			break;
		}
	}
}

static void sequencer(ymz_chip *z)
{
	for (int k = 0; k < 8; k++) {
		ymz_sequence *s = &z->seq[k];
		if (!s->is_playing)
			continue;
		if (s->delay > 0)
			s->delay--;
		else {
			int reg = rom_byte(s->offset++);
			u8 data = rom_byte(s->offset++);
			switch (reg) {
			case 0x0f:
				for (int ch = 0; ch < 8; ch++)
					if (s->stopchan & (1 << ch))
						z->ch[ch].is_playing = 0;
				if (s->loop)
					s->offset = get_seq_offs(s->sequence);
				else
					s->is_playing = 0;
				break;
			case 0x0e:
				s->delay = (u32)s->timer * 32 + 32 - 1;
				break;
			default:
				internal_reg_write(z, (u8)reg, data);
				break;
			}
		}
	}
}

u64 ymz_samples, ymz_blocks, ymz_rate_changes;

/* the master volume, shift and clip limiter on a mix */
static s32 final_stage(const ymz_chip *z, s32 mixr)
{
	if (z->mute)
		return 0;
	mixr *= z->vlma;
	mixr >>= 7 - z->bsl;
	switch (z->cpl) {    /* clip limiter */
	case 3: {
		const s32 lim = 32768 * 75 / 100;
		mixr = mixr < -lim ? -lim : mixr > lim ? lim : mixr;
		break;
	}
	case 2: {
		const s32 lim = 32768 * 875 / 1000;
		mixr = mixr < -lim ? -lim : mixr > lim ? lim : mixr;
		break;
	}
	case 1:
		mixr = mixr < -32768 ? -32768 : mixr > 32767 ? 32767 : mixr;
		break;
	}
	return mixr;
}

/* one output sample of chip z: MAME's right channel, the only one the board routes. Test 68: with g (the
 * categories' gains, Q15), *scaled = the same mix with each channel's share times its phrase's gain (32768 for every
 * category and a factor of 256 give the chip's sample exactly: v * 32768 >> 15 == v) */
static s32 chip_sample(ymz_chip *z, const s32 *g, s32 *scaled)
{
	s32 mixr = 0, mixs = 0;

	sequencer(z);
	for (int k = 0; k < YMZ_CHANNELS; k++) {
		ymz_channel *c = &z->ch[k];
		if (c->output_remaining == 0 && c->is_playing && !c->is_paused) {
retry:
			if (c->last_block) {
				if (c->loop) {
					if (c->loop != 255)
						--c->loop;
					c->pending = 1;
				} else {
					c->is_playing = 0;
					c->output_remaining = 0;
					amm_clear(&c->dec);
				}
			}
			if (c->is_playing) {
				if (c->pending) {
					int phrase = c->phrase;
					c->atbl = z->rom[4 * phrase] >> 4 & 7;
					c->pptr = 8 * (int)get_phrase_offs(phrase);
					c->cat = ymz_phrase_cat[phrase & 0xFF];
					c->gk = ymz_phrase_k[phrase & 0xFF];
					if (!c->last_block && c->latch.volume2 != c->current.volume2)
						amm_clear(&c->dec);
					c->pending = 0;
				}
				int sample_rate = (int)z->sclock, channel_count;
				if (!amm_decode_buffer(&c->dec, &c->pptr, (int)z->rom_bytes * 8, c->output_data, &c->output_remaining,
						&sample_rate, &channel_count, c->atbl) || c->output_remaining == 0) {
					c->is_playing = !c->last_block;    /* detect infinite retry loop */
					c->last_block = 1;
					c->output_remaining = 0;
					goto retry;
				}
				ymz_blocks++;
				if (ymz_rate_mode == 0 && (u32)sample_rate != z->sclock) {
					z->sclock = (u32)sample_rate;
					ymz_rate_changes++;
				}
				c->last_block = c->output_remaining < 1152;
				c->output_ptr = 0;
				c->current = c->latch;
			}
		}
		if (c->output_remaining > 0) {
			s32 smpl = c->output_data[c->output_ptr++];
			smpl = (smpl * (c->volume >> 17)) >> 7;
			smpl = (smpl * c->current.volume2) >> 7;
			const s32 v = (smpl * c->current.pan) >> 7;
			mixr += v;
			if (g)
				mixs += (s32)(((s64)v * ((g[c->cat] * c->gk) >> 8)) >> 15);
			c->output_remaining--;
			if (c->output_remaining == 0 && !c->is_playing)
				amm_clear(&c->dec);
		}
	}

	if (g)
		*scaled = final_stage(z, mixs);
	return final_stage(z, mixr);
}

/* test 68: the gains now one step towards their targets (a 1/128 step per sample: 8 ms at 16 kHz, settled to 0.4%
 * in ~44 ms; no click when a volume changes or the test chip takes over) */
static void ramp(s32 *cur, const volatile s32 *tgt, int zero)
{
	for (int k = 0; k < YMZ_CATS; k++) {
		const s32 t = zero ? 0 : tgt[k], d = t - cur[k];
		cur[k] = d > -128 && d < 128 ? t : cur[k] + d / 128;
	}
}

/* the board's chip: its sample for the sink; ymz_out = the host's mix (its gains, the test chip's sample added) */
static s32 ymz_sample(void)
{
	s32 r;

	if (ymz_scaled) {
		ramp(g_main, ymz_gain_main, ymz_test_busy); /* the test chip plays alone */
		r = chip_sample(&zm, g_main, &ymz_out);
	} else {
		r = chip_sample(&zm, NULL, NULL);
		ymz_out = r;
	}
	ymz_samples++;
	return r;
}

/* ======================================================================== */
/* test 68: the sound test's chip (the host's commands, on the sound thread) */
/* ======================================================================== */

#define TQ_N 256u            /* power of two */
static u32 tq[TQ_N];
static u32 tq_head, tq_tail; /* head: the host (ymz_test_cmd), tail: ymz_run */
static int t_loop = -1;      /* the sequence to loop once slot 0's has ended (-1: none) */

/* host thread: a register write (reg << 8 | data) or YMZT_LOOP / YMZT_RESET; 0 when the queue is full */
int ymz_test_cmd(u32 what)
{
	const u32 h = tq_head;
	if (h - __atomic_load_n(&tq_tail, __ATOMIC_ACQUIRE) >= TQ_N)
		return 0;
	tq[h & (TQ_N - 1)] = what;
	__atomic_store_n(&tq_head, h + 1, __ATOMIC_RELEASE);
	return 1;
}

static void test_reset(void)
{
	memset(zt.ch, 0, sizeof zt.ch);
	memset(zt.seq, 0, sizeof zt.seq);
	for (int k = 0; k < YMZ_CHANNELS; k++) {
		ymz_channel *c = &zt.ch[k];
		c->latch.pan = 64;
		c->latch.pan1 = 64;
		c->current = c->latch;
		amm_clear(&c->dec);
	}
	zt.mute = zm.mute;   /* the game's master settings (its first writes: 00 00, 01 40, 02 30) */
	zt.doen = zm.doen;
	zt.vlma = zm.vlma;
	zt.bsl = zm.bsl;
	zt.cpl = zm.cpl;
	zt.sclock = zm.sclock;
	t_loop = -1;
	t_vol0 = 0;
}

/* the test chip's sample, added to ymz_out; 0 while it has nothing to play (then it costs nothing) */
static void test_sample(void)
{
	u32 t = tq_tail;
	const u32 h = __atomic_load_n(&tq_head, __ATOMIC_ACQUIRE);
	s32 v = 0;
	int busy = 0;

	for (; t != h; t++) {
		const u32 what = tq[t & (TQ_N - 1)];
		if (what == YMZT_RESET)
			test_reset();
		else if ((what & ~0xFFu) == YMZT_LOOP(0))
			t_loop = (int)(what & 0xFF);
		else if ((what & ~0xFFu) == YMZT_VOL0(0))
			t_vol0 = (u8)what;
		else
			internal_reg_write(&zt, (u8)(what >> 8), (u8)what);
	}
	__atomic_store_n(&tq_tail, t, __ATOMIC_RELEASE);
	if (t_loop >= 0 && !zt.seq[0].is_playing) { /* the intro ended: its loop, the sequencer starting it again */
		internal_reg_write(&zt, 0x80, (u8)t_loop);
		internal_reg_write(&zt, 0x81, 0x03);
		t_loop = -1;
	}
	for (int k = 0; k < 8 && !busy; k++)
		busy = zt.seq[k].is_playing || zt.ch[k].is_playing || zt.ch[k].output_remaining > 0;
	if (busy || t_loop >= 0) {
		ramp(g_test, ymz_gain_test, 0);
		chip_sample(&zt, g_test, &v);
		v = ymz_out + v;
		ymz_out = v < -32768 ? -32768 : v > 32767 ? 32767 : v;
	}
	ymz_test_busy = busy;
}

/* ======================================================================== */
/* CPU side: timestamped writes, replayed by ymz_run                        */
/* ======================================================================== */

#define YMZ_QUEUE 65536u     /* power of two */
#define EVT_MARK 0x100u      /* "rendering may reach this cycle" */
#define EVT_SNAP 0x101u      /* test 69: the chip into a save state's slot (the low byte) */
#define EVT_LOAD 0x102u      /* test 69: the chip out of one */

typedef struct {
	u64 time;
	u32 what;                /* reg << 8 | data, or EVT_MARK << 8 */
	u32 pad;
} ymz_event;

static ymz_event queue[YMZ_QUEUE];
static u32 q_head, q_tail;   /* head: written by the CPU side, tail: by ymz_run */
static u8 cpu_cur_reg;
u64 ymz770_writes, ymz_queue_full;

static void push(u64 now, u32 what)
{
	u32 h = q_head;
	if (h - __atomic_load_n(&q_tail, __ATOMIC_ACQUIRE) >= YMZ_QUEUE) {
		ymz_queue_full++;
		return;
	}
	queue[h & (YMZ_QUEUE - 1)].time = now;
	queue[h & (YMZ_QUEUE - 1)].what = what;
	__atomic_store_n(&q_head, h + 1, __ATOMIC_RELEASE);
}

void ymz770_write(u64 now, u32 offset, u8 v)
{
	ymz770_writes++;
	if (offset & 1)
		push(now, (u32)cpu_cur_reg << 8 | v);
	else
		cpu_cur_reg = v;
}

void ymz770_mark(u64 now)
{
	push(now, EVT_MARK << 8);
}

/* test 69 (state.h): the chip as it is at that time, kept for a save state's slot, and put back at a load's time (the
 * sound side's clock never goes back: rt_epoch); the CPU side's register latch goes with the CPU's state */
static ymz_chip zsnap[RT_SLOTS];

void ymz770_snap(u64 time, int slot)
{
	push(time, EVT_SNAP << 8 | (u32)slot);
}

void ymz770_unsnap(u64 time, int slot)
{
	push(time, EVT_LOAD << 8 | (u32)slot);
}

void ymz770_state(rt_sbuf *b)
{
	ST(b, cpu_cur_reg);
}

/* ======================================================================== */
/* chip side                                                                */
/* ======================================================================== */

static u64 chip_time;        /* cycle of the next chip sample */
static u64 mark_time;        /* samples may be made up to here */
void (*ymz_write_hook)(u64 sample, u8 reg, u8 data);

void ymz_init(const u8 *rom, u32 bytes)
{
	memset(&zm, 0, sizeof zm);
	amm_base = rom;
	zm.rom = rom;
	zm.rom_bytes = bytes;
	zm.sclock = 16384000u / 1024u;
	for (int k = 0; k < YMZ_CHANNELS; k++) {       /* device_start + device_reset */
		ymz_channel *c = &zm.ch[k];
		c->latch.pan = 64;
		c->latch.pan1 = 64;
		c->current = c->latch;
		amm_clear(&c->dec);
	}
	q_head = q_tail = 0;
	cpu_cur_reg = 0;
	chip_time = 0;
	mark_time = 0;
	ymz_samples = ymz_blocks = ymz_rate_changes = 0;
	/* test 68: every phrase as the game plays it, every gain 1, the test chip silent */
	memset(ymz_phrase_cat, 0, sizeof ymz_phrase_cat);
	for (int k = 0; k < 256; k++)
		ymz_phrase_k[k] = 256;
	for (int k = 0; k < YMZ_CATS; k++)
		ymz_gain_main[k] = ymz_gain_test[k] = g_main[k] = g_test[k] = 32768;
	ymz_scaled = 0;
	ymz_out = 0;
	memset(&zt, 0, sizeof zt);
	zt.rom = rom;
	zt.rom_bytes = bytes;
	test_reset();
	tq_head = tq_tail = 0;
	ymz_test_busy = 0;
}

/* Replay queued writes and make chip samples up to the latest queued mark; each
 * sample goes to sink(value, rate, its cycle). Returns the number of samples made. Writes
 * stamped at or before a sample's time take effect before it (MAME's write()
 * brings the stream up to now first). */
int ymz_run(void (*sink)(s32 v, u32 rate, u64 time, void *u), void *u)
{
	int made = 0;
	u32 t = q_tail;
	for (;;) {
		u32 h = __atomic_load_n(&q_head, __ATOMIC_ACQUIRE);
		while (t != h && queue[t & (YMZ_QUEUE - 1)].time <= chip_time) {
			u32 what = queue[t & (YMZ_QUEUE - 1)].what;
			if ((what >> 8) == EVT_MARK)
				mark_time = queue[t & (YMZ_QUEUE - 1)].time;
			else if ((what >> 8) == EVT_SNAP)
				zsnap[what & 0xFF] = zm;
			else if ((what >> 8) == EVT_LOAD)
				zm = zsnap[what & 0xFF];
			else {
				if (ymz_write_hook)
					ymz_write_hook(ymz_samples, (u8)(what >> 8), (u8)what);
				internal_reg_write(&zm, (u8)(what >> 8), (u8)what);
			}
			t++;
		}
		__atomic_store_n(&q_tail, t, __ATOMIC_RELEASE);
		if (chip_time >= mark_time) {
			/* the next event is later than chip_time: is a mark queued behind it? */
			u32 k = t;
			while (k != h && (queue[k & (YMZ_QUEUE - 1)].what >> 8) != EVT_MARK)
				k++;
			if (k == h || queue[k & (YMZ_QUEUE - 1)].time <= chip_time)
				return made;
			mark_time = queue[k & (YMZ_QUEUE - 1)].time;
		}
		u32 rate = zm.sclock;
		s32 v = ymz_sample();
		if (ymz_scaled) /* test 68: the test chip at the same rate (every real phrase is 16 kHz) */
			test_sample();
		sink(v, rate, chip_time, u);
		made++;
		chip_time += CPU_HZ / rate;
	}
}

u32 ymz_rate(void) { return zm.sclock; }
u64 ymz_chip_time(void) { return chip_time; }

/* decode one phrase on its own, from a cleared decoder (tools and checks) */
int ymz_decode_phrase(int phrase, s16 *out, int max, int *rate)
{
	static amm_t m;
	int pos = 8 * (int)get_phrase_offs(phrase), atbl = zm.rom[4 * phrase] >> 4 & 7, n = 0;
	amm_clear(&m);
	while (n + 0x1000 <= max) {
		int got = 0, sr = (int)zm.sclock, chans;
		if (!amm_decode_buffer(&m, &pos, (int)zm.rom_bytes * 8, out + n, &got, &sr, &chans, atbl) || got == 0)
			break;
		*rate = sr;
		n += got;
		if (got < 1152)
			break;
	}
	return n;
}
