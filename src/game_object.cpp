
#include <game_object.hpp>

game_object::
game_object()
{}

game_object::
~game_object()
{}

float
game_object::
x()
{
	return x_;
}

float
game_object::
y()
{
	return y_;
}

void
game_object::
render()
{}

void 
game_object::
set_position(float x, float y)
{
	x_ = x;
	y_ = y;
}
