#ifndef PLAYER_HPP
#define PLAYER_HPP

//#include <vector>
//#include <iostream>
//#include <GL/gl.h>
//#include <GL/glu.h>
#include <game_object.hpp>



class player : public game_object
{
public:
	player();
	~player();

	void render();
private:
	
};

#endif