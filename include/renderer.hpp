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

	void init() ;
	void draw( std::vector< game_object*> & objects , glm::mat4 view  );


private:

	std::vector< texture > textures_ ;
	bool is_valid_texture(std::string name) ;
	GLuint get_texture_by_name( std::string name ) ;
	
	SDL_Window * win_ ;
	SDL_Renderer * ren_ ; 
	SDL_GLContext * context_;


	int window_width_;
	int window_height_;
};

#endif