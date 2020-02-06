#include <renderer.hpp>
#include <algorithm>
#include <iostream>

#define APP_WIDTH 800
#define APP_HEIGHT 800

renderer::
renderer( ) :  win_( nullptr ) ,
		ren_( nullptr ) ,
		context_( nullptr ),
		window_width_( APP_WIDTH ),
		window_height_( APP_HEIGHT )
{

}

renderer::
~renderer()
{
	SDL_DestroyWindow(win_);
	SDL_Quit();
}

void
renderer::
init()
{
	SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 3 );
	SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 3 );
	SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );
	SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 16 );
    SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );

	unsigned int window_flags = SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN ;
	win_ = SDL_CreateWindow( "Hello World!" , 100 , 100 , window_width_ , window_height_ , window_flags );
	if ( win_ == nullptr )
	{
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError() << std::endl;
		return;
	}
	SDL_GLContext Context = SDL_GL_CreateContext(win_);
	glewExperimental=true;
	glewInit() ;

	if (glewInit() != GLEW_OK) 
	{
    	fprintf(stderr, "Failed to initialize GLEW\n"); 
	}

	GLuint VertexArrayID;
	glGenVertexArrays(1, &VertexArrayID);
	glBindVertexArray(VertexArrayID);
	GLenum err = glGetError() ;
	std::cout << "bind vbo"<< err << std::endl;
	glEnableClientState(GL_VERTEX_ARRAY);
	err = glGetError() ;
	std::cout << err << "enable client" << std::endl;

	SDL_GetWindowSize( win_ , &window_width_ , &window_height_ );
	glViewport(0, 0, window_width_, window_height_);
	glClearColor(0.0f, 0.0f, 0.2f, 0.0f) ;

}

void
renderer::
draw( std::vector< game_object*> & objects , glm::mat4 view  )
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
		(*it)->render(view , tex_id , win_) ;
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