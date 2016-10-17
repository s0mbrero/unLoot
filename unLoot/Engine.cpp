#include "stdafx.h"
#include "Engine.h"

Engine::Engine() {
	Vector2f resolution;
	resolution.x = 800;
	resolution.y = 600;

	counter = 0;

	m_window.create( VideoMode( resolution.x, resolution.y ), "unLoot" );
	m_window.setFramerateLimit( 60 );

}

void Engine::start( ) {
	font.loadFromFile( "assets/manaspc.ttf" );
	text.setFont( font );
	text.setStyle( Text::Bold );
	text.setPosition( 260.0f, 50.0f );
	text.setCharacterSize( 32 );
	text.setFillColor( Color::Black );

	Clock clock;

	while ( m_window.isOpen( ) ) {

		Time dt = clock.restart( );
		float dtAsSeconds = dt.asSeconds( );

		input( );
		update( dtAsSeconds );
		draw( );
	}
}