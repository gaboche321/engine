#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include <string>
#include <GL/glew.h>

#define TEXTURE_DIR "textures/"

class texture
{
public:
	texture();
	texture( std::string name );
	~texture();

	GLuint get_texture() ;
	const std::string get_name() ;
	bool is_valid() ;
private:
	void init( std::string name ) ;

	std::string name_ ;
	GLuint id_ ;
};

#endif