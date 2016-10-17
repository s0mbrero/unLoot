#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "Chest.h"

using namespace sf;

Chest::Chest( ) {
	position.x = 400;
	position.y = 300;

	chestTexture.loadFromFile( "assets/simpleChest.png" );
	chestSprite.setTexture( chestTexture );
	chestSprite.setOrigin( 8, 8 );
	chestSprite.setScale( 8.0f, 8.0f );
	
}

Sprite Chest::getSprite( ) {
	return chestSprite;
}

void Chest::update( float dtAsSeconds ) {
	chestSprite.setPosition( position );

}