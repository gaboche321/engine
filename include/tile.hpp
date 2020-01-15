

#ifndef TILE_HPP
#define TILE_HPP

#include <GL/glew.h>
#include <SDL_opengl.h>
#include <GL/glu.h>
#include "glm/glm.hpp"
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <shader.hpp>

class tile
{
public:
	tile();
	~tile();
	void init() ;
	void render();
private:
	shader vs_ ;
	shader fs_ ;
	GLuint program_ ;
	GLuint vbo_ ;

};


#endif