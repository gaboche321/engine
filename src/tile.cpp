
#include <tile.hpp>
#include <vector>
#include <math.h>
#define STB_IMAGE_IMPLEMENTATION
#include "../stb-master/stb_image.h"

tile::
tile()
{
}
tile::
tile( int x , int y)
{
	set_position( x, y) ;
}


tile::
~tile()
{}

void 
tile::
set_position(int x, int y)
{
	x_ = x;
	y_ = y;
}


void
tile::
init()
{	

	program_.create_program( "tile_vs.glsl" , "tile_fs.glsl" );
	glUseProgram( program_.get_program() ) ;

	

	glGenBuffers(1, &vbo_);
	glBindBuffer(GL_ARRAY_BUFFER, vbo_);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices_), &vertices_, GL_STATIC_DRAW);

	glGenTextures(1, &tex_);
	glBindTexture(GL_TEXTURE_2D, tex_);
	// set the texture wrapping/filtering options (on the currently bound texture object)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	// load and generate the texture
	int width, height, nrChannels;
	unsigned char *data = stbi_load("tile_test.jpg", &width, &height, &nrChannels, 0);
	if (data)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
		glGenerateMipmap(GL_TEXTURE_2D);
	}
	else
	{
		std::cout << "Failed to load texture" << std::endl;
	}
	stbi_image_free(data);
}


void
tile::
render()
{

	float s_f = 0.2f;
	float iso_angle = atan(0.5) ;
	float iso_complement =  asin(1) - iso_angle ;
	float vertical_angle = atan(1/sqrt(2)) ;
	float horizontal_angle = asin(1/sqrt(2)) ;
	//glm::mat4 r = glm::rotate(mvp, 0.785398f, glm::vec3(0,0,1));
	//mvp = r;
	glm::mat4 s = glm::scale(glm::mat4(1.0f) , glm::vec3(s_f , s_f , s_f)) ;
	glm::vec3 t_vector = s_f*glm::vec3( (float)x_ , (float)y_ ,0.f) ;
	glm::mat4 t = glm::translate(glm::mat4(1.0f) , t_vector );

	glm::mat4 model =  t * s ;

	glm::mat4 r1 = glm::rotate(glm::mat4(1.0f), horizontal_angle, glm::vec3(0,0,1));
	glm::mat4 r2 = glm::rotate(glm::mat4(1.0f), vertical_angle, glm::vec3(1,0,0));

	glm::mat4 view = r2 * r1;

	glm::mat4 mvp = view * model ;

	program_.set_uniform_mat4( "mvp" , mvp );


	glBindBuffer(GL_ARRAY_BUFFER, vbo_);

	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4*sizeof(GLfloat), (void*)0 ) ;
	glEnableVertexAttribArray(0);

	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4*sizeof(GLfloat), (void*)(2*sizeof(GLfloat)) ) ;
	glEnableVertexAttribArray(1);  

	glBindTexture(GL_TEXTURE_2D, tex_);
	//glBindVertexArray(VAO);
	//glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

	glDrawArrays(GL_TRIANGLES, 0, 6); // Starting from vertex 0; 3 vertices total -> 1 triangle
	
	glDisableVertexAttribArray(0);
	glDisableVertexAttribArray(1);
}