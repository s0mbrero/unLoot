#include "stdafx.h"
#include "Engine.h"

Engine::Engine() {
	Vector2f resolution;
	resolution.x = 800;
	resolution.y = 600;

	m_window.create( VideoMode( resolution.x, resolution.y ), "unLoot" );
	m_window.setFramerateLimit( 60 );

}

void Engine::start( ) {
	Clock clock;

	while ( m_window.isOpen( ) ) {

		Time dt = clock.restart( );
		float dtAsSeconds = dt.asSeconds( );

		input( );
		update( dtAsSeconds );
		draw( );
	}
}