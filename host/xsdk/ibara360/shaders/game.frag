#version 450
// Test 124b: the game picture, FILTER NEAREST / BILINEAR (the C side picks the sampler), then SCREEN COLOR.
// Test 125: a menu pixel (alpha 0, marked by sm_draw) is the plain centre sample, no colour, filter or outline.
// Test 126: BILINEAR made from 4 point taps (look.t.w = 1.0), so menu texels (alpha 0) stay plain.
// No ifs (xsdk turns them into selects, every arm runs): the colour mode is a 3x4 matrix (rows r, g, b times
// (R, G, B, 1)), OUTLINE = a per-screen-pixel Sobel, white edges on black (test 130). t.xy = one texel, s.xy =
// one screen pixel in uv.
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 o_color;
layout(set = 0, binding = 0) uniform sampler2D u_texture;
layout(push_constant) uniform Look {
	vec4 r;
	vec4 g;
	vec4 b;
	vec4 t;
	vec4 s; // test 130: s.xy = one screen pixel in uv (OUTLINE)
} look;

#define TAP(PX, PY) texture(u_texture, vec2(PX, PY)).rgb

void main()
{
	const vec3 Y = vec3(0.299, 0.587, 0.114);
	vec4 p = texture(u_texture, v_uv);
	/* test 126: a 4-tap bilinear from point taps (bicubic.frag's texel maths), blended by look.t.w */
	vec2 q = v_uv / look.t.xy - 0.5;
	vec2 i = floor(q);
	vec2 f = q - i;
	vec4 u = vec4(i.x + 0.5, i.x + 1.5, i.x + 0.5, i.x + 1.5) * look.t.x;
	vec4 v = vec4(i.y + 0.5, i.y + 0.5, i.y + 1.5, i.y + 1.5) * look.t.y;
	vec3 bil = TAP(u.x, v.x) * (1.0 - f.x) * (1.0 - f.y) + TAP(u.y, v.y) * f.x * (1.0 - f.y) +
	          TAP(u.z, v.z) * (1.0 - f.x) * f.y + TAP(u.w, v.w) * f.x * f.y;
	vec3 c = mix(p.rgb, bil, look.t.w);
	/* test 130: OUTLINE = a per-screen-pixel Sobel, white edges on black; s = one screen pixel in uv */
	float dx = look.s.x, dy = look.s.y; // test 130 review: not const (a push constant is not a constant expression)
	float tl = dot(texture(u_texture, v_uv + vec2(-dx, -dy)).rgb, Y);
	float t = dot(texture(u_texture, v_uv + vec2(0.0, -dy)).rgb, Y);
	float tr = dot(texture(u_texture, v_uv + vec2(dx, -dy)).rgb, Y);
	float l = dot(texture(u_texture, v_uv + vec2(-dx, 0.0)).rgb, Y);
	float r = dot(texture(u_texture, v_uv + vec2(dx, 0.0)).rgb, Y);
	float bl = dot(texture(u_texture, v_uv + vec2(-dx, dy)).rgb, Y);
	float b = dot(texture(u_texture, v_uv + vec2(0.0, dy)).rgb, Y);
	float br = dot(texture(u_texture, v_uv + vec2(dx, dy)).rgb, Y);
	float sx = (tr + 2.0 * r + br) - (tl + 2.0 * l + bl);
	float sy = (bl + 2.0 * b + br) - (tl + 2.0 * t + tr);
	float mag = sqrt(sx * sx + sy * sy) / 4.0;
	vec4 x = vec4(c, 1.0);
	vec3 m = vec3(dot(look.r, x), dot(look.g, x), dot(look.b, x));
	m = mix(m, vec3(smoothstep(0.10, 0.45, mag)), look.t.z);
	o_color = vec4(mix(p.rgb, clamp(m, 0.0, 1.0), p.a), 1.0);
}
