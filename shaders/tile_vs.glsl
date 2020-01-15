#version 330 core
layout (location = 0) in vec3 aPos; // the position variable has attribute position 0
layout (location = 1) in vec2 aTexCoord ;

out vec4 vertexColor; // specify a color output to the fragment shader
out vec2 TexCoord;

uniform mat4 mvp;

void main()
{
   gl_Position = mvp * vec4(aPos.x, aPos.y, aPos.z, 1.0);
    vertexColor = vec4(0.5, 0.0, 0.0, 1.0); // set the output variable to a dark-red color
	TexCoord = aTexCoord;
}