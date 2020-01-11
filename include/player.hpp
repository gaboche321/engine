#include <vector>
#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>

struct position
{
	position( float x_ = 0, float y_ = 0)
	{
		x = x_;
		y = y_;
	}
	float x, y;
};

class player
{
public:
	player();
	~player();

	void render();
	void set_position( float x , float y );
private:
	position position_;
};