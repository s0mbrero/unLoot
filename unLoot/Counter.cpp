#include "stdafx.h"
#include "Counter.h"


Counter::Counter( ) {
	font.loadFromFile( "assets/manaspc.ttf" );
	text.setFont( font );
	text.setStyle( Text::Bold );
	text.setPosition( 260.0f, 50.0f );
	text.setCharacterSize( 32 );
	text.setFillColor( Color::Black );

	counter = 0;
}

void Counter::increment( ) {
	counter++;
}

Text Counter::getText( ) {
	std::ostringstream textString;
	textString << "Chests opened: " << counter;
	text.setString( textString.str( ) );
	return text;
}