#include "stdafx.h"
#include "Engine.h"

void Engine::input() {

	if ( Keyboard::isKeyPressed( Keyboard::Escape ) ) {
		m_window.close( );
	}

	if ( Mouse::isButtonPressed( Mouse::Left ) ) {
		counter++;
	}


	sf::Event event;
	while (m_window.pollEvent( event ))
	{
		
		if (event.type == sf::Event::Closed) {
			m_window.close( );
		}
			
	}

}
