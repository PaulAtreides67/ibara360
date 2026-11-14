#version 450
// Test 124b: the game picture, FILTER LANCZOS (Lanczos-2, 4x4 point-sampled taps), then SCREEN COLOR as game.frag.
// Test 125: a menu pixel (alpha 0, marked by sm_draw) is the plain centre sample, no colour, filter or outline.
// L(x) = 2 sin(pi x) sin(pi x / 2) / (pi x)^2. For the taps x = k - f (k = -1..2) the sines are +-sin(pi f) and
// +-sin(pi f / 2) or +-cos(pi f / 2), so three trig calls an axis (arguments 0..pi: xsdk's sin is only good on
// -pi..pi), the weights divided by their sum (the constant 2 / pi^2 cancels). f kept off 0 and 1 (0 / 0 there).
// No ifs (xsdk runs every arm) and no functions (xsdk refuses them: macros instead).
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 o_color;
layout(set = 0, binding = 0) uniform sampler2D u_texture;
layout(push_constant) uniform Look {
	vec4 r;
	vec4 g;
	vec4 b;
	vec4 t;
} look;

#define TAP(PX, PY) texture(u_texture, vec2(PX, PY)).rgb
#define ROW(PY) (TAP(u.x, PY) * wx.x + TAP(u.y, PY) * wx.y + TAP(u.z, PY) * wx.z + TAP(u.w, PY) * wx.w)

void main()
{
	const vec3 Y = vec3(0.299, 0.587, 0.114);
	const float PI = 3.14159265;
	vec4 p = texture(u_texture, v_uv);
	vec2 q = v_uv / look.t.xy - 0.5;
	vec2 i = floor(q);
	vec2 f = clamp(q - i, 0.001, 0.999);
	vec2 s = sin(PI * f);
	vec2 sh = sin(0.5 * PI * f);
	vec2 ch = cos(0.5 * PI * f);
	vec2 d0 = 1.0 + f;
	vec2 d2 = 1.0 - f;
	vec2 d3 = 2.0 - f;
	vec4 wx = vec4(-s.x * ch.x / (d0.x * d0.x), s.x * sh.x / (f.x * f.x), s.x * ch.x / (d2.x * d2.x),
	               -s.x * sh.x / (d3.x * d3.x));
	vec4 wy = vec4(-s.y * ch.y / (d0.y * d0.y), s.y * sh.y / (f.y * f.y), s.y * ch.y / (d2.y * d2.y),
	               -s.y * sh.y / (d3.y * d3.y));
	wx = wx / dot(wx, vec4(1.0));
	wy = wy / dot(wy, vec4(1.0));
	vec4 u = vec4(i.x - 0.5, i.x + 0.5, i.x + 1.5, i.x + 2.5) * look.t.x;
	vec4 v = vec4(i.y - 0.5, i.y + 0.5, i.y + 1.5, i.y + 2.5) * look.t.y;
	vec3 sum = ROW(v.x) * wy.x + ROW(v.y) * wy.y + ROW(v.z) * wy.z + ROW(v.w) * wy.w;
	vec3 c = clamp(sum, 0.0, 1.0);
	float ll = dot(texture(u_texture, v_uv - vec2(look.t.x, 0.0)).rgb, Y);
	float lr = dot(texture(u_texture, v_uv + vec2(look.t.x, 0.0)).rgb, Y);
	float lu = dot(texture(u_texture, v_uv - vec2(0.0, look.t.y)).rgb, Y);
	float ld = dot(texture(u_texture, v_uv + vec2(0.0, look.t.y)).rgb, Y);
	float gx = lr - ll;
	float gy = ld - lu;
	float e = sqrt(gx * gx + gy * gy);
	vec4 x = vec4(c, 1.0);
	vec3 m = vec3(dot(look.r, x), dot(look.g, x), dot(look.b, x));
	m = m * (1.0 - look.t.z * smoothstep(0.12, 0.35, e));
	o_color = vec4(mix(p.rgb, clamp(m, 0.0, 1.0), p.a), 1.0);
}
