

#ifndef TILE_HPP
#define TILE_HPP

#include <SDL.h>
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <GL/glu.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <shader.hpp>
#include <game_object.hpp>

class tile : public game_object
{
public:
	tile();
	tile(int x, int y);
	~tile();
	void init() ;
	void render(glm::mat4 view, GLuint tex , SDL_Window * win );


private:

	std::string attached_texture_ ;

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