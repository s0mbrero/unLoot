#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;

class Chest{
private:

	Sprite chestSprite;
	Texture chestTexture;

	Vector2f position;
	Vector2f sizeChest;

	RectangleShape chestHitbox;

public:
	Chest( );

	FloatRect getPosition( );

	Sprite getSprite( );

	void indent( bool isPressed );

	void update( float elapsedTime );
};