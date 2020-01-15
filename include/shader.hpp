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
	bool load_shader( std::string name , shader_type type); 
	GLuint get_shader( ) ;

private:
	std::string name_ ;
	shader_type type_ ; 

	GLuint id_ ;
};



#endif