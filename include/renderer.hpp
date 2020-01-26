#ifndef RENDERER_HPP
#define RENDERER_HPP

//#include <app.hpp>
#include <SDL.h>
#include <vector>
#include <game_object.hpp>
#include <texture.hpp>

class renderer
{
public:
	renderer();
	~renderer();


	void draw( std::vector< game_object*> & objects , glm::mat4 view , SDL_Window * win_ );

	bool is_valid_texture(std::string name) ;
	GLuint get_texture_by_name( std::string name ) ;
private:

	std::vector< texture > textures_ ;
};

#endif