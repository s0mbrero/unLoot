#include "stdafx.h"
#include "Engine.h"
#include "Counter.h"
#include <sstream>

using namespace sf;

void Engine::draw() {
	m_window.clear( Color::White );

	cursorSprite.setPosition( static_cast<sf::Vector2f>(sf::Mouse::getPosition( m_window )) );

	m_window.draw( background );
	m_window.draw( chest.getSprite( ) );

	Text text = clickCounter.getText( );
	m_window.draw( text );
	
	m_window.setMouseCursorVisible( false );
	m_window.draw( infoPanel.getShape( ) );
	m_window.draw( cursorSprite );

	m_window.display( );


}