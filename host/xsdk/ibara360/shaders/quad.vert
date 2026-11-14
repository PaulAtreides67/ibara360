#version 450
// A corner of a quad: where it is, from -1 to 1 across the screen and up it, and where it sits in the texture.
// test 124: turn.t.x = -1 turns the whole 16:9 screen upside down (ROTATION UPSIDE DOWN), else 1.
layout(location = 0) in vec2 a_position;
layout(location = 2) in vec2 a_uv;
layout(location = 0) out vec2 v_uv;
layout(push_constant) uniform Turn {
	vec4 t;
} turn;

void main()
{
	gl_Position = vec4(a_position * turn.t.x, 0.0, 1.0);
	v_uv = a_uv;
}
