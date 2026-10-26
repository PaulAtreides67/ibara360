#version 450
// Test 58, the info card: a corner of a quad (where it is, from -1 to 1 across the screen and up it), its colour (the
// sprite's tint and how opaque it is) and where it sits in the card's texture.
layout(location = 0) in vec2 a_position;
layout(location = 1) in vec4 a_color;
layout(location = 2) in vec2 a_uv;
layout(location = 0) out vec2 v_uv;
layout(location = 1) out vec4 v_color;

void main()
{
	gl_Position = vec4(a_position, 0.0, 1.0);
	v_uv = a_uv;
	v_color = a_color;
}
