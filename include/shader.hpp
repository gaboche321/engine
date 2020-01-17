#ifndef SHADER_HPP
#define SHADER_HPP

#define SHADER_DIR "shaders/"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <GL/glew.h>
#include <SDL_opengl.h>
#include <GL/glu.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


enum shader_type
{
	vertex_shader,
	fragment_shader
};

class shader
{
public:
	shader() ;
	~shader() ;
	GLuint create_program( std::string vs_name , std::string fs_name );
	GLuint get_program( ) ;

	void set_uniform_mat4( std::string uniform , glm::mat4 mat );

private:
	GLuint load_shader( std::string name , shader_type type); 

	GLuint id_ ;
};



#endif