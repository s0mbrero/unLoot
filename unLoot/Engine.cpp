#include "stdafx.h"
#include "Engine.h"
#include <Windows.h>

Engine::Engine() {
	Vector2f resolution;
	resolution.x = 900;
	resolution.y = 500;

	m_window.create(
		VideoMode( resolution.x, resolution.y ),
		"unLoot"
		);
	m_window.setFramerateLimit( 144 );


}

void Engine::start( ) {

	Clock clock;

	cursorTexture.loadFromFile( "assets/regCursor.png" );
	cursorSprite.setTexture( cursorTexture );
	cursorSprite.setScale( 4, 4 );

	backgroundTexture.loadFromFile( "assets/dungeonBricks.png" );

	IntRect background1Rect( 0, 0, 16, 16);
	background1.setTexture( backgroundTexture);
	background1.setTextureRect(background1Rect);

	IntRect background2Rect( 16, 0, 16, 16 );
	background2.setTexture( backgroundTexture );
	background2.setTextureRect( background2Rect );

	IntRect background3Rect( 24, 0, 16, 16 );
	background3.setTexture( backgroundTexture );
	background3.setTextureRect( background3Rect );

	backgroundTexture.setRepeated( true );

	
	while ( m_window.isOpen( ) ) {

		Time dt = clock.restart( );
		float dtAsSeconds = dt.asSeconds( );

		input( );
		update( dtAsSeconds );
		draw( );
	}
}