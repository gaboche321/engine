#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class game_object
{
public:
	game_object();
	virtual ~game_object();

	void set_position( float x , float y ) ;
	void set_speed( float x , float y ) ;
	void update(  );

	virtual void render( glm::mat4 view );

	float x();
	float y();
private:
	float x_ , y_ ;
	float vx_ , vy_ ;
};

#endif