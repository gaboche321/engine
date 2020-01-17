

#ifndef TILE_HPP
#define TILE_HPP

#include <GL/glew.h>
#include <SDL_opengl.h>
#include <GL/glu.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <shader.hpp>

class tile
{
public:
	tile();
	tile(int x, int y);
	~tile();
	void init() ;
	void render();

	void set_position(int x, int y);
private:
	int x_, y_;

	shader program_ ;
	GLuint vbo_ ;
	GLfloat vertices_[24] = { 	0.5 , -0.5 , 1.0 , 1.0 ,
								-0.5 , -0.5 , 0.0 , 1.0 ,
								-0.5 , 0.5 , 0.0 , 0.0 ,
								-0.5 , 0.5 , 0.0 , 0.0 ,
								0.5 , 0.5 , 1.0 , 0.0 ,
								0.5 , -0.5 , 1.0 , 1.0 };
	GLuint tex_ ;
};


#endif