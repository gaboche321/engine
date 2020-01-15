
#include <tile.hpp>
#include <vector>


tile::
tile()
{
	//init shaders
	
	
}

tile::
~tile()
{}

	GLfloat vertices_[] = { -1.0 , -1.0 , 0.0 ,
									1.0 , -1.0 , 0.0 ,
									0.0 , 1.0 , 0.0  };

void
tile::
init()
{	
			GLenum err = glGetError() ;
	std::cout << err << std::endl;
	vs_.load_shader( "tile_vs.glsl" , shader_type::vertex_shader ) ;
	fs_.load_shader( "tile_fs.glsl" , shader_type::fragment_shader ) ;
			 err = glGetError() ;
	std::cout << err << std::endl;
	program_ = glCreateProgram();
	glAttachShader(program_, vs_.get_shader());
	glAttachShader(program_, fs_.get_shader());
	glLinkProgram(program_) ;
		glUseProgram(program_) ;
		 err = glGetError() ;
	std::cout << err << std::endl;
	

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
		 err = glGetError() ;
	std::cout << err << std::endl;

	/*glEnableClientState( GL_VERTEX_ARRAY ) ;
		 err = glGetError() ;
	std::cout << err << std::endl;*/
	glGenBuffers(1, &vbo_);
		 err = glGetError() ;
	std::cout << err << std::endl;
	// The following commands will talk about our 'vertexbuffer' buffer
	glBindBuffer(GL_ARRAY_BUFFER, vbo_);
	err = glGetError() ;
	std::cout << err << " " << sizeof(vertices_) << std::endl;
	// Give our vertices to OpenGL.

	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices_), &vertices_, GL_STATIC_DRAW);
	err = glGetError() ;
	std::cout << err << std::endl;
}


void
tile::
render()
{

	// glm::mat4 mvp(0.5) ;

	//GLuint MatrixID = glGetUniformLocation(vs_.get_shader(), "MVP") ;
	//glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &mvp[0][0]);

	GLenum err = glGetError() ;
	std::cout << err << std::endl;

	err = glGetError() ;
	std::cout << "yo " << err << std::endl;
	
	glBindBuffer(GL_ARRAY_BUFFER, vbo_);
	err = glGetError() ;
	std::cout << err << std::endl;
	glVertexAttribPointer(0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
							3,                  // size
							GL_FLOAT,           // type
							GL_FALSE,           // normalized?
							3*sizeof(GLfloat),                  // stride
							(void*)0            // array buffer offset
							) ;
	err = glGetError() ;
	std::cout << err << std::endl;
	glEnableVertexAttribArray(0);
	err = glGetError() ;
	std::cout << err << std::endl;
	glDrawArrays(GL_TRIANGLES, 0, 4); // Starting from vertex 0; 3 vertices total -> 1 triangle
	
	 err = glGetError() ;
	std::cout << err << std::endl;

	glDisableVertexAttribArray(0);
}