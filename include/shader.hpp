#ifndef SHADER_HPP
#define SHADER_HPP

#define SHADER_DIR "shaders/"
#include <string>
#include <fstream>

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

private:
	std::string name_ ;
	shader_type type_ ; 
};



#endif