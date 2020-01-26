#include <renderer.hpp>
#include <algorithm>
#include <iostream>

renderer::
renderer( )
{
}

renderer::
~renderer()
{


}

void
renderer::
draw( std::vector< game_object*> & objects , glm::mat4 view , SDL_Window * win_ )
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	for( auto it = objects.begin() ; it != objects.end() ; it++)
	{
		GLuint tex_id ;
		std::string name = (*it)->get_attached_texture() ;
		if ( !is_valid_texture( name ) ) 
		{
			texture tex(name);
			tex_id = tex.get_texture( ) ;
			textures_.push_back( tex ) ;
		}
		else 
		{
			tex_id = get_texture_by_name( name ) ;
		}
		(*it)->render(view , tex_id) ;
	}
	SDL_GL_SwapWindow(win_);
}

bool
renderer::
is_valid_texture( std::string name)
{
	for ( auto it = textures_.begin() ; it != textures_.end() ; it++ )
	{
		if ( it->get_name() == name )
		{
			std::cout << it->get_name() << std::endl ;
			return it->is_valid() ;
		}
	}
	return false ;
}

GLuint
renderer::
get_texture_by_name( std::string name )
{
	for ( auto it = textures_.begin() ; it != textures_.end() ; it++ )
	{
		if ( it->get_name() == name )
		{
			return it->get_texture() ; ;
		}
	}
	return 0 ;
}