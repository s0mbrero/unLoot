#include "stdafx.h"
#include "Engine.h"
#include "Counter.h"

void Engine::input() {

	if ( Keyboard::isKeyPressed( Keyboard::Escape ) ) {
		m_window.close( );
	}

	Vector2i mousePos = Mouse::getPosition(m_window);

	sf::Event event;
	while (m_window.pollEvent( event ))
	{
		
		if (event.type == sf::Event::Closed) {
			m_window.close( );
		} else if ( event.type == event.MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left ) {

			if ((mousePos.x > 236 && mousePos.x < 364) && ( mousePos.y > 186 && mousePos.y < 314 )) {
				chest.indent( true );
				clickCounter.increment( );
			}
			
		}
		else if (event.type == event.MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left) {
			chest.indent( false );
		}

		
			
	}

}
