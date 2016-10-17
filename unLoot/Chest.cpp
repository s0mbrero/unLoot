#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "Chest.h"
#include <thread>
#include <chrono>

using namespace sf;

Chest::Chest( ) {
	position.x = 300;
	position.y = 250;

	chestTexture.loadFromFile( "assets/simpleChest.png" );
	chestSprite.setTexture( chestTexture );
	chestSprite.setOrigin( 8, 8 );
	chestSprite.setScale( 8.0f, 8.0f );

	sizeChest.x = 128;
	sizeChest.y = 128;

	chestHitbox.setSize( sizeChest );
	chestHitbox.setOrigin( 64, 64 );
	chestHitbox.setPosition( position );
	
}

Sprite Chest::getSprite( ) {
	return chestSprite;
}

void Chest::update( float dtAsSeconds ) {
	chestSprite.setPosition( position );

}

void Chest::indent( bool isPressed ) {
	if (isPressed) {
		chestSprite.setScale( 7.5, 7.5 );
	}
	else if (!isPressed) {
		chestSprite.setScale( 8, 8 );
	}
}

FloatRect Chest::getGlobalBounds( ) {
	return chestHitbox.getGlobalBounds( );
}