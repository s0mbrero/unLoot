#include "stdafx.h"
#include "Engine.h"

using namespace sf;

void Engine::draw() {

	m_window.clear( Color::White );
	m_window.draw( chest.getSprite( ) );
	m_window.display( );
}