#pragma once
#include <SFML\Graphics.hpp>
#include "Chest.h"
#include "Counter.h"

using namespace sf;

class Engine {
private:

	RenderWindow m_window;

	Chest chest;
	Counter clickCounter;

	Texture cursorTexture;
	Sprite cursorSprite;

	void input( );
	void update( float dtAsSeconds );
	void draw( );


public:

	Engine();

	void start( );



};