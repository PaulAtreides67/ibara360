#version 450
// The texture as it is: the card, the scanlines' greys (multiplied in by the blend state), anything but the game
// picture. Test 124b: back to one sample. Test 124's FILTER / SCREEN COLOR in here made it ~2000 instructions for
// every pixel of every quad (xsdk fetches all samples first and turns ifs into selects): the game lost 60 fps. The
// game picture now has its own shaders (game.frag, bicubic.frag, lanczos.frag).
layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 o_color;
layout(set = 0, binding = 0) uniform sampler2D u_texture;

void main()
{
	o_color = texture(u_texture, v_uv);
}
