#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;

class Chest{
private:

	Sprite chestSprite;
	Texture chestTexture;


	Vector2f position;



public:
	Chest( );

	FloatRect getPosition( );

	Sprite getSprite( );

	void update( float elapsedTime );
};