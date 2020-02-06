//#include <iostream>
#include <SDL.h>
#include <app.hpp>
#include <utils.hpp>



#define MS_PER_UPDATE 1000/60

/*
 * Lesson 1: Hello World!
 */
int main(int, char**)
{	
	app application;
	application.start_loop() ;

	return 0;
}

app::
app() :
		end_app_( false ) 

{
	log( "Starting application" ) ;

	if ( SDL_Init( SDL_INIT_VIDEO ) != 0 )
	{
		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
		return;
	}
	renderer_.init();

}

app::
~app()
{

}

void
app::
start_loop()
{
	log( "Starting Loop" );

	camera_ = new camera;
	camera_->set_position(0,0);

	for (int i = -20; i < 20 ; i++)
	{
		for(int j = -20; j < 20; j++)
		{	
			std::cout << i << "," << j << std::endl ;
			tile * new_tile = new tile(i,j) ;
			new_tile->set_attached_texture( "tile_test.jpg") ;
			objects_.push_back( new_tile );
		}
	}


	unsigned int previous = SDL_GetTicks();
	double lag = 0.0;
	while (!end_app_)
	{
		double current = SDL_GetTicks();
		double elapsed = current - previous;
		previous = current;
		lag += elapsed;

		event_handler();

		while (lag >= MS_PER_UPDATE)
		{
			camera_->update() ;
			//update();
			lag -= MS_PER_UPDATE;
		}
		
		renderer_.draw( objects_ ,  camera_->get_view_matrix() ) ;
	}

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
		}
		else if( id == SDL_KEYDOWN )
		{
			if (e.key.keysym.sym == SDLK_w)
			{
				camera_->set_speed( 0 , -0.01 );
				std::cout << "up" << std::endl;  
			}
			else if(e.key.keysym.sym == SDLK_s)
			{
				camera_->set_speed( 0 ,0.01 );
				std::cout << "down" << std::endl;  
			}
			else if(e.key.keysym.sym == SDLK_a)
			{
				camera_->set_speed( 0.01 , 0 );
				std::cout << "left" << std::endl;  
			}
			else if(e.key.keysym.sym == SDLK_d)
			{
				camera_->set_speed( -0.01 , 0 );
				std::cout << "right" << std::endl;  
			}
			else if(e.key.keysym.sym == SDLK_q )
			{
				end_app_ = true ;
                e.type = SDL_QUIT;
				SDL_PushEvent( &e );
				
			}
		}
		else if( id == SDL_KEYUP)
		{
			if (e.key.keysym.sym == SDLK_w || 
				e.key.keysym.sym == SDLK_a ||
				e.key.keysym.sym == SDLK_s ||
				e.key.keysym.sym == SDLK_d)
			{
				camera_->set_speed( 0 , 0 );
			}
		}
	}
}
