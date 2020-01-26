
#include <game_object.hpp>

game_object::
game_object():x_( 0 ) ,
				y_( 0 ) ,
				vx_( 0 ) ,
				vy_( 0 )
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
render( glm::mat4 view , GLuint tex)
{}

void 
game_object::
set_position(float x, float y)
{
	x_ = x;
	y_ = y;
}

void 
game_object::
set_speed(float x, float y)
{
	vx_ = x;
	vy_ = y;
}

void
game_object::
update(   )
{
	x_ += vx_;
	y_ += vy_;
}

void
game_object::
set_attached_texture(std::string name)
{
	attached_texture_ = name ;
} 

const std::string 
game_object::
get_attached_texture()
{
	return attached_texture_ ;
}