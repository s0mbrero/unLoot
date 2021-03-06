#pragma once
#include <SFML\Graphics.hpp>
#include "Chest.h"
#include "Counter.h"
#include "Panel.h"

using namespace sf;

class Engine {
private:

	RenderWindow m_window;

	Chest chest;
	Counter clickCounter;
	Panel infoPanel;

	Texture cursorTexture;
	Sprite cursorSprite;

	Texture backgroundTexture;
	Sprite background;

	void input( );
	void update( float dtAsSeconds );
	void draw( );


public:

	Engine();

	void start( );

};