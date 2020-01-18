#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class game_object
{
public:
	game_object();
	virtual ~game_object();

	void set_position( float x , float y ) ;

	virtual void render();

	float x();
	float y();
private:
	float x_ , y_ ;

};

#endif