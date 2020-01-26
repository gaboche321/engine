#ifndef APP_H
#define APP_H

#include <SDL.h>
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <GL/glu.h>
#include "glm/glm.hpp"

#include <player.hpp>
#include <tile.hpp>
#include <game_object.hpp>
#include <camera.hpp>
#include <renderer.hpp>

#include <vector>

class app
{
public:
	app();
	~app();
	void start_loop();
private:
	void init();
	void render();
	void event_handler();

	SDL_Window * win_ ;
	SDL_Renderer * ren_ ; 
	SDL_GLContext * context_;

	int window_width_;
	int window_height_;

	camera * camera_ ;
	std::vector< game_object* > objects_ ;

	renderer renderer_ ;
	bool end_app_ ;
};




#endif