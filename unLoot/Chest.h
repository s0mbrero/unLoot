#pragma once
#include <SFML\Graphics.hpp>

using namespace sf;

class Chest{
private:

	Sprite chestSprite;
	Texture chestTexture;

	Texture shadowTexture;
	Sprite shadowSprite;

	Vector2f chestPosition;
	Vector2f sizeChestHitbox;
	Vector2f shadowPosition;

	

public:
	Chest( );

	RectangleShape chestHitbox;

	Sprite getSprite( );

	void indent( bool isPressed );

	void update( float elapsedTime );

	
};