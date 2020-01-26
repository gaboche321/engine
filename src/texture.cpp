#include <texture.hpp>
#include "../stb-master/stb_image.h"

#include <iostream>

texture::
texture()
{
}

texture::
texture( std::string name)
{
	init(name) ;
}

texture::
~texture()
{}

void
texture::
init( ::std::string name )
{
	std::cout << "texture init" << std::endl ;
	glGenTextures(1, &id_);
	glBindTexture(GL_TEXTURE_2D, id_ );
	// set the texture wrapping/filtering options (on the currently bound texture object)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	// load and generate the texture
	int width, height, nrChannels;
	std::string path = name ;
	unsigned char *data = stbi_load( path.c_str() , &width, &height, &nrChannels, 0);
	if (data)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
		name_ = name ;
	}
	else
	{
		std::cout << "Failed to load texture" << std::endl;
	}
	stbi_image_free(data);

}

const std::string 
texture::
get_name()
{
	return name_ ;
}

bool
texture::
is_valid()
{
	return glIsTexture( id_ ) ;
}

GLuint 
texture::
get_texture()
{
	return id_ ;
}