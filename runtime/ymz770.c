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
 */
#include <string.h>
#include "cv1k.h"

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

static struct {
	const u8 *rom;
	u32 rom_bytes;
	u32 sclock;
	u8 cur_reg, mute, doen, vlma, vlma1, bsl, cpl;
	ymz_channel ch[YMZ_CHANNELS];
	ymz_sequence seq[8];
} z;

int ymz_rate_mode;          /* 0 = MAME 0.289 (rate from each AMM block), 1 = fixed 16 kHz (MAME before 2026-03) */

static u8 rom_byte(u32 offset) { return z.rom[offset % z.rom_bytes]; }
static u32 get_phrase_offs(int phrase)
{
	return (u32)z.rom[4 * phrase + 1] << 16 | (u32)z.rom[4 * phrase + 2] << 8 | z.rom[4 * phrase + 3];
}
static u32 get_seq_offs(int sqn)
{
	return (u32)z.rom[4 * sqn + 1 + 0x400] << 16 | (u32)z.rom[4 * sqn + 2 + 0x400] << 8 | z.rom[4 * sqn + 3 + 0x400];
}

static void internal_reg_write(u8 reg, u8 data)
{
	if (reg < 0x40) {
		switch (reg) {
		case 0x00:
			z.mute = data & 1;
			z.doen = data >> 1 & 1;
			break;
		case 0x01:
			z.vlma = data;
			break;
		case 0x02:
			z.bsl = data & 7;
			z.cpl = data >> 4 & 7;
			break;
		default:
			break;
		}
	} else if (reg < 0x60) {
		ymz_channel *c = &z.ch[reg >> 2 & 0x07];
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
		ymz_sequence *s = &z.seq[reg >> 4 & 0x07];
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
						z.ch[i].is_playing = 0;
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

static void sequencer(void)
{
	for (int k = 0; k < 8; k++) {
		ymz_sequence *s = &z.seq[k];
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
						z.ch[ch].is_playing = 0;
				if (s->loop)
					s->offset = get_seq_offs(s->sequence);
				else
					s->is_playing = 0;
				break;
			case 0x0e:
				s->delay = (u32)s->timer * 32 + 32 - 1;
				break;
			default:
				internal_reg_write((u8)reg, data);
				break;
			}
		}
	}
}

u64 ymz_samples, ymz_blocks, ymz_rate_changes;

/* one output sample: MAME's right channel, the only one the board routes */
static s32 ymz_sample(void)
{
	s32 mixr = 0;

	sequencer();
	for (int k = 0; k < YMZ_CHANNELS; k++) {
		ymz_channel *c = &z.ch[k];
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
					c->atbl = z.rom[4 * phrase] >> 4 & 7;
					c->pptr = 8 * (int)get_phrase_offs(phrase);
					if (!c->last_block && c->latch.volume2 != c->current.volume2)
						amm_clear(&c->dec);
					c->pending = 0;
				}
				int sample_rate = (int)z.sclock, channel_count;
				if (!amm_decode_buffer(&c->dec, &c->pptr, (int)z.rom_bytes * 8, c->output_data, &c->output_remaining,
						&sample_rate, &channel_count, c->atbl) || c->output_remaining == 0) {
					c->is_playing = !c->last_block;    /* detect infinite retry loop */
					c->last_block = 1;
					c->output_remaining = 0;
					goto retry;
				}
				ymz_blocks++;
				if (ymz_rate_mode == 0 && (u32)sample_rate != z.sclock) {
					z.sclock = (u32)sample_rate;
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
			mixr += (smpl * c->current.pan) >> 7;
			c->output_remaining--;
			if (c->output_remaining == 0 && !c->is_playing)
				amm_clear(&c->dec);
		}
	}

	if (z.mute)
		mixr = 0;
	else {
		mixr *= z.vlma;
		mixr >>= 7 - z.bsl;
		switch (z.cpl) {    /* clip limiter */
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
	}
	ymz_samples++;
	return mixr;
}

/* ======================================================================== */
/* CPU side: timestamped writes, replayed by ymz_run                        */
/* ======================================================================== */

#define YMZ_QUEUE 65536u     /* power of two */
#define EVT_MARK 0x100u      /* "rendering may reach this cycle" */

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

/* ======================================================================== */
/* chip side                                                                */
/* ======================================================================== */

static u64 chip_time;        /* cycle of the next chip sample */
static u64 mark_time;        /* samples may be made up to here */
void (*ymz_write_hook)(u64 sample, u8 reg, u8 data);

void ymz_init(const u8 *rom, u32 bytes)
{
	memset(&z, 0, sizeof z);
	amm_base = rom;
	z.rom = rom;
	z.rom_bytes = bytes;
	z.sclock = 16384000u / 1024u;
	for (int k = 0; k < YMZ_CHANNELS; k++) {       /* device_start + device_reset */
		ymz_channel *c = &z.ch[k];
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
			else {
				if (ymz_write_hook)
					ymz_write_hook(ymz_samples, (u8)(what >> 8), (u8)what);
				internal_reg_write((u8)(what >> 8), (u8)what);
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
		u32 rate = z.sclock;
		sink(ymz_sample(), rate, chip_time, u);
		made++;
		chip_time += CPU_HZ / rate;
	}
}

u32 ymz_rate(void) { return z.sclock; }
u64 ymz_chip_time(void) { return chip_time; }

/* decode one phrase on its own, from a cleared decoder (tools and checks) */
int ymz_decode_phrase(int phrase, s16 *out, int max, int *rate)
{
	static amm_t m;
	int pos = 8 * (int)get_phrase_offs(phrase), atbl = z.rom[4 * phrase] >> 4 & 7, n = 0;
	amm_clear(&m);
	while (n + 0x1000 <= max) {
		int got = 0, sr = (int)z.sclock, chans;
		if (!amm_decode_buffer(&m, &pos, (int)z.rom_bytes * 8, out + n, &got, &sr, &chans, atbl) || got == 0)
			break;
		*rate = sr;
		n += got;
		if (got < 1152)
			break;
	}
	return n;
}
