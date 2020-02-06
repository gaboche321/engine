#include <camera.hpp>

#define ISOMETRIC

camera::
camera()
{
}

camera::
~camera()
{}

glm::mat4
camera::
get_view_matrix()
{

	glm::mat4 t = glm::translate(glm::mat4(1.0f), glm::vec3( x() , y() , 0.f ) ) ;

#ifdef ISOMETRIC
	float vertical_angle = asin(1) - atan(1/sqrt(2)) ;
	float horizontal_angle = -asin(1/sqrt(2)) ;

	glm::mat4 r1 = glm::rotate(glm::mat4(1.0f), horizontal_angle, glm::vec3(0,0,1));
	glm::mat4 r2 = glm::scale(glm::mat4(1.0f) , glm::vec3( 1.0f, 0.5f, 1.f) ) ;
	

	return t * r2* r1;
#else
	return t ;
#endif
}