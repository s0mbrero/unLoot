#include "stdafx.h"
#include "SFML\Graphics.hpp"
#include "Chest.h"
#include <thread>
#include <chrono>

using namespace sf;

Chest::Chest( ) {

	/*
		Chest Sprite
	*/
	// Set chest position to center
	chestPosition.x = 300;
	chestPosition.y = 250;

	// Load texture and assign to sprite
	chestTexture.loadFromFile( "assets/simpleChest.png" );
	chestSprite.setTexture( chestTexture );

	// Centre sprite origin and scale up to 128*128
	chestSprite.setOrigin( 8, 8 );
	chestSprite.setScale( 8, 8 );

	/*
		Chest hitbox for mouse click detection
	*/
	sizeChestHitbox.x = 128;
	sizeChestHitbox.y = 128;

	chestHitbox.setSize( sizeChestHitbox );
	chestHitbox.setOrigin( 64, 64 );
	chestHitbox.setPosition( chestPosition );

	/*
		Chest Shadow
	*/
	// Cascade shadow
	shadowPosition.x = chestPosition.x + 10;
	shadowPosition.y = chestPosition.y + 10;

	// Load texture and assign to sprite
	shadowTexture.loadFromFile( "assets/shadow.png" );
	shadowSprite.setTexture( shadowTexture );

	//Centre sprite origin and scale up to 128*128
	shadowSprite.setOrigin( 8, 8 );
	shadowSprite.setScale( 8, 8 );

	shadowSprite.setPosition( shadowPosition );
	
}

// Returns chest sprite for use when drawing
Sprite Chest::getSprite( ) {
	return chestSprite;
}

// Updates positions of chest and shadow sprites
void Chest::update( float dtAsSeconds ) {
	chestSprite.setPosition( chestPosition );
}

// Indents chest sprite while mouse is pressed down
void Chest::indent( bool isPressed ) {
	if (isPressed) {
		chestSprite.setScale( 7.5, 7.5 );
		shadowSprite.setScale( 7.5, 7.5 );
	}
	else if (!isPressed) {
		chestSprite.setScale( 8, 8 );
		shadowSprite.setScale( 8, 8 );
	}
}