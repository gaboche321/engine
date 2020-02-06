
#include <tile.hpp>
#include <vector>
#include <math.h>
#define STB_IMAGE_IMPLEMENTATION
#include "../stb-master/stb_image.h"

#define TILE_SIZE 32.f

tile::
tile()
{
}
tile::
tile( int x , int y)
{
	set_position( x, y) ;
	init() ;
}


tile::
~tile()
{}



void
tile::
init()
{	

	program_.create_program( "tile_vs.glsl" , "tile_fs.glsl" );

	glGenBuffers(1, &vbo_);
	glBindBuffer(GL_ARRAY_BUFFER, vbo_);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices_), &vertices_, GL_STATIC_DRAW);

}


void
tile::
render(glm::mat4 view , GLuint tex , SDL_Window * win )
{
	glUseProgram( program_.get_program() ) ;

	int size_x,size_y;
	SDL_GetWindowSize(win,&size_x,&size_y);

	float scale_x = 2.0*TILE_SIZE/size_x ;
	float scale_y = 2.0*TILE_SIZE/size_y ;

	glm::mat4 s = glm::scale(glm::mat4(1.0f) , glm::vec3(scale_x , scale_y , 1.0f)) ;
	glm::vec3 t_vector = glm::vec3( scale_x*(float)x() , scale_y*(float)y() ,0.f) ;
	glm::mat4 t = glm::translate(glm::mat4(1.0f) , t_vector );
	glm::mat4 model =  t * s ;



	glm::mat4 mvp =  view * model;

	program_.set_uniform_mat4( "mvp" , mvp );


	glBindBuffer(GL_ARRAY_BUFFER, vbo_);

	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4*sizeof(GLfloat), (void*)0 ) ;
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4*sizeof(GLfloat), (void*)(2*sizeof(GLfloat)) ) ;
	glEnableVertexAttribArray(1);  

	glBindTexture(GL_TEXTURE_2D, tex);
	//glBindVertexArray(VAO);
	//glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glDrawArrays(GL_TRIANGLES, 0, 6); // Starting from vertex 0; 3 vertices total -> 1 triangle
	
	glDisableVertexAttribArray(0);
	glDisableVertexAttribArray(1);

}