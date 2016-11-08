#include "stdafx.h"
#include "Counter.h"

// Entry method when creating counter instance
Counter::Counter( ) {
	// Load and set font
	font.loadFromFile( "assets/manaspc.ttf" );
	text.setFont( font );
	// Set text properties
	text.setStyle( Text::Bold );
	text.setPosition( 300, 50 );
	text.setCharacterSize( 32 );
	text.setFillColor( Color::White );

	// Initialise counter variable
	counter = 0;
}

// Pretty self-explanatory really
void Counter::increment( ) {
	counter++;
}

// Add counter to display text and return resultant string
Text Counter::getText( ) {
	std::ostringstream textString;
	textString << "Chests opened: " << counter;
	text.setString( textString.str( ) );

	bounds = text.getGlobalBounds( );
	text.setOrigin((bounds.width / 2.0f), (bounds.height / 2));

	return text;
}