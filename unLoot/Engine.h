#pragma once
#include <SFML\Graphics.hpp>
#include "Chest.h"

using namespace sf;

class Engine {
private:

	RenderWindow m_window;

	Chest chest;

	int counter;

	void input( );
	void update( float dtAsSeconds );
	void draw( );


public:

	Engine();

	void start( );

	void incrementCounter( );



};