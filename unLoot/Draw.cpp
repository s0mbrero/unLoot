#include "stdafx.h"
#include "Engine.h"
#include <sstream>

using namespace sf;

void Engine::draw() {
	m_window.clear( Color::White );

	m_window.draw( chest.getSprite( ) );
	
	std::ostringstream textString;
	textString << "Chests opened: " << counter;
	text.setString( textString.str() );
	m_window.draw( text );

	m_window.display( );


}