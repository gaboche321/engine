#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <SDL.h>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <string>

class game_object
{
public:
	game_object();
	virtual ~game_object();

	void set_position( float x , float y ) ;
	void set_speed( float x , float y ) ;
	void update(  );

	virtual void render( glm::mat4 view , GLuint tex , SDL_Window * win  );

	float x();
	float y();


	void set_attached_texture( std::string name) ;
	const std::string get_attached_texture() ;


private:
	float x_ , y_ ;
	float vx_ , vy_ ;
	bool visible_ ;

	std::string attached_texture_ ;
};

#endif