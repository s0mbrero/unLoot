#include "stdafx.h"
#include "Engine.h"

void Engine::input() {

	if ( Keyboard::isKeyPressed( Keyboard::Escape ) ) {
		m_window.close( );
	}

	if ( Mouse::isButtonPressed( Mouse::Left ) ) {
		counter++;
	}


}
