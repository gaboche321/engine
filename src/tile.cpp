
#include <tile.hpp>
#include <vector>
#include <math.h>
#define STB_IMAGE_IMPLEMENTATION
#include "../stb-master/stb_image.h"

tile::
tile()
{
}
tile::
tile( int x , int y)
{
	set_position( x, y) ;
}


tile::
~tile()
{}

void 
tile::
set_position(int x, int y)
{
	x_ = x;
	y_ = y;
}


void
tile::
init()
{	

	vs_.load_shader( "tile_vs.glsl" , shader_type::vertex_shader ) ;
	fs_.load_shader( "tile_fs.glsl" , shader_type::fragment_shader ) ;

	program_ = glCreateProgram();
	glAttachShader(program_, vs_.get_shader());
	glAttachShader(program_, fs_.get_shader());
	glLinkProgram(program_) ;
		glUseProgram(program_) ;

	GLint isLinked = 0;
	glGetProgramiv(program_, GL_LINK_STATUS, &isLinked);
	if(isLinked == GL_FALSE)
	{
		std::cout << "error linking program" << std::endl;
		GLint maxLength = 0;
		glGetProgramiv(program_, GL_INFO_LOG_LENGTH, &maxLength);

		// The maxLength includes the NULL character
		std::vector<GLchar> errorLog(maxLength);
		glGetShaderInfoLog(program_, maxLength, &maxLength, &errorLog[0]);

		std::string error_str(errorLog.begin() , errorLog.end()) ;

		std::cout << error_str << std::endl;
		// Provide the infolog in whatever manor you deem best.
		// Exit with failure.
		glDeleteProgram(program_); // Don't leak the shader.
	}

	glGenBuffers(1, &vbo_);
	glBindBuffer(GL_ARRAY_BUFFER, vbo_);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices_), &vertices_, GL_STATIC_DRAW);

	glGenTextures(1, &tex_);
	glBindTexture(GL_TEXTURE_2D, tex_);
	// set the texture wrapping/filtering options (on the currently bound texture object)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	// load and generate the texture
	int width, height, nrChannels;
	unsigned char *data = stbi_load("tile_test.jpg", &width, &height, &nrChannels, 0);
	if (data)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
	}
	else
	{
		std::cout << "Failed to load texture" << std::endl;
	}
	stbi_image_free(data);
}


void
tile::
render()
{

	float s_f = 0.5f;
	float iso_angle = atan(0.5) ;
	float iso_complement =  asin(1) - iso_angle ;
	//glm::mat4 r = glm::rotate(mvp, 0.785398f, glm::vec3(0,0,1));
	//mvp = r;
	glm::mat4 s = glm::scale(glm::mat4(1.0f) , glm::vec3(s_f , s_f , s_f)) ;
	glm::vec3 t_vector = s_f*glm::vec3( cos(iso_angle)*x_ - cos(iso_angle)*y_, sin(iso_angle)*y_ + sin(iso_angle)*x_ ,0.f) ;
	glm::mat4 t = glm::translate(glm::mat4(1.0f) , t_vector );

	glm::mat4 mvp =  t * s ;

	GLuint MatrixID = glGetUniformLocation(program_, "mvp") ;
	glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &mvp[0][0]);


	glBindBuffer(GL_ARRAY_BUFFER, vbo_);

	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4*sizeof(GLfloat), (void*)0 ) ;
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4*sizeof(GLfloat), (void*)(2*sizeof(GLfloat) ) ) ;
	glEnableVertexAttribArray(1);  
	
	glBindTexture(GL_TEXTURE_2D, tex_);
	//glBindVertexArray(VAO);
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4); // Starting from vertex 0; 3 vertices total -> 1 triangle
	
	glDisableVertexAttribArray(0);
	glDisableVertexAttribArray(1);
}