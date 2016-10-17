#include "stdafx.h"
#include "Counter.h"


Counter::Counter( ) {
	font.loadFromFile( "assets/manaspc.ttf" );
	text.setFont( font );
	text.setStyle( Text::Bold );
	text.setPosition( 400.0f, 50.0f );
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

	bounds = text.getGlobalBounds( );
	text.setOrigin((bounds.width / 2.0f), (bounds.height / 2));

	return text;
}