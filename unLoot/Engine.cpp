#include "stdafx.h"
#include "Engine.h"
#include <Windows.h>

Engine::Engine() {
	Vector2f resolution;
	resolution.x = 800;
	resolution.y = 600;

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
	

	while ( m_window.isOpen( ) ) {

		Time dt = clock.restart( );
		float dtAsSeconds = dt.asSeconds( );

		input( );
		update( dtAsSeconds );
		draw( );
	}
}