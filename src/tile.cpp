
#include <tile.hpp>



tile::
tile()
{}

tile::
~tile()
{}

void
tile::
render()
{
	//glm::mat4 Model ;
	glMatrixMode(GL_MODELVIEW);
	glScalef( 1.1,1.1,1.1) ;
	 glPushMatrix();
	// glLoadIdentity();
	// // set a 2D orthographic projection
	// gluOrtho2D(0, 800, 0, 600);
	// // invert the y axis, down is positive
	// // mover the origin from the bottom left corner
	// glScalef(1, -1, 1);
	// // to the upper left corner
	// glTranslatef(0, -600, 0);
	// glMatrixMode(GL_MODELVIEW);

	glColor3f(1., 0. ,0. ) ;
        // then draw all you want, for instance:
	glBegin(GL_QUADS);
		glVertex2f(0. ,-0.5);
		glVertex2f(-1. ,0.);
		glVertex2f(0. ,0.5);
		glVertex2f(1. , 0.);

	glEnd();


}