#include "stdafx.h"
#include "Engine.h"
#include "Counter.h"

void Engine::input() {

	if ( Keyboard::isKeyPressed( Keyboard::Escape ) ) {
		m_window.close( );
	}

	sf::Event event;
	while (m_window.pollEvent( event ))
	{
		
		if (event.type == sf::Event::Closed) {
			m_window.close( );
		} else if ( event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left ) {
			clickCounter.increment( );

		}

		
			
	}

}
