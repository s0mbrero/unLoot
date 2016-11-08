#include "stdafx.h"
#include "Engine.h"
#include "Counter.h"

void Engine::input() {

	// Close window if escape key is pressed
	if ( Keyboard::isKeyPressed( Keyboard::Escape ) ) {
		m_window.close( );
	}

	// Store mouse coordinates
	Vector2i mousePos = Mouse::getPosition(m_window);

	Event event;
	while (m_window.pollEvent( event ))
	{
		// Close window when close button is pressed
		if (event.type == Event::Closed) {
			m_window.close( );
		}
		
		// Event handler for mouse pressed down
		if ( event.type == event.MouseButtonPressed && event.mouseButton.button == Mouse::Left ) {

			// If mouse is hovering over chest hitbox when pressed, indent chest sprite
			if (IntRect(chest.chestHitbox.getGlobalBounds( )).contains( mousePos )) {
				chest.indent( true );
				clickCounter.increment( );
			}
			// Event handler for mouse released
		} else if (event.type == event.MouseButtonReleased && event.mouseButton.button == Mouse::Left) {
			
			// If chest is indented, reset chest sprite
			chest.indent( false );
		}
	} // End while loop

} // End Engine::input()
