#include "player.hpp"


player::
player()
{
	std::cout << "linker is workin";

}



player::
~player()
{}

void
player::
render()
{
	glColor3f( 1. , 0. , 0.5 );
	glBegin(GL_QUADS);
	{
		glVertex2f( position_.x - 0.1, position_.y - 0.1) ;
		glVertex2f( position_.x - 0.1, position_.y + 0.1) ;
		glVertex2f( position_.x + 0.1, position_.y + 0.1) ;
		glVertex2f( position_.x + 0.1, position_.y - 0.1) ;
	}
	glEnd();

}

void
player::
set_position( float x , float y )
{
	position_.x = x;
	position_.y = y;

}