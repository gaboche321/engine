//#include <iostream>
#include <SDL.h>
#include <app.hpp>
#include <utils.hpp>

#define APP_WIDTH 800
#define APP_HEIGHT 600

/*
 * Lesson 1: Hello World!
 */
int main(int, char**){
	//First we need to start up SDL, and make sure it went ok
	
	app application;
	application.start_loop() ;



	return 0;
}

app::
app() : win_( nullptr ) ,
		ren_( nullptr ) ,
		context_( nullptr ),
		end_app_( false ) ,
		window_width_( APP_WIDTH ),
		window_height_( APP_HEIGHT )
{
	log( "Starting application" ) ;



	if ( SDL_Init( SDL_INIT_VIDEO ) != 0 )
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return;
	}
	
 	SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 3 );
	SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 3 );
	SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );
	SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 16 );
    SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );

	log( "Creating window" );
	unsigned int window_flags = SDL_WINDOW_OPENGL;
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
}

app::
~app()
{
	SDL_DestroyWindow(win_);
	SDL_Quit();
}

void
app::
start_loop()
{
	log( "Starting Loop" );
	GLenum err = glGetError() ;
	std::cout << err << std::endl;
	t.init() ;
	//glViewport(0, 0, window_width_, window_height_);
		glViewport(0, 0, APP_WIDTH, APP_HEIGHT);
	glClearColor(0.0f, 0.0f, 0.4f, 0.0f) ;
	while( !end_app_ )
	{
		event_handler();
		render();
	}

}

void
app::
render()
{
	//log( "Rendering" );

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//p.render();
	t.render();
    SDL_GL_SwapWindow(win_);
}

void
app::
event_handler()
{
	SDL_Event e ;
	while ( SDL_PollEvent( &e ) )
	{
		//log( "Event found" );
		int id = e.type ;
		if ( id == SDL_WINDOWEVENT )
		{		
			int id = e.window.event ;
			if( id == SDL_WINDOWEVENT_CLOSE )
			{
				log( "Asking to quit" );
				end_app_ = true ;
                e.type = SDL_QUIT;
				SDL_PushEvent( &e );
                break;
			}
		}
		else if( id == SDL_MOUSEMOTION )
		{
			float pos_x = 2.*(float)e.button.x/(float)window_width_ - 1 ;
			float pos_y = 2.*(float)( window_height_ - e.button.y )/(float)window_height_ - 1 ; 
			p.set_position( pos_x , pos_y ) ;
		}

	}
}
