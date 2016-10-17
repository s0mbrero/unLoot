#include "stdafx.h"
#include "Engine.h"
#include "Counter.h"
#include <sstream>

using namespace sf;

void Engine::draw() {
	m_window.clear( Color::White );

	m_window.draw( chest.getSprite( ) );
	
	Text text = clickCounter.getText( );

	
	m_window.draw( text );

	m_window.display( );


}