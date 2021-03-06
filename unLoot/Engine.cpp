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
	backgroundTexture.setRepeated( true );

	background.setTexture( backgroundTexture );
	background.setTextureRect( IntRect( 0, 0, 1000, 700 ) );


	while ( m_window.isOpen( ) ) {

		Time dt = clock.restart( );
		float dtAsSeconds = dt.asSeconds( );

		input( );
		update( dtAsSeconds );
		draw( );
	}
}