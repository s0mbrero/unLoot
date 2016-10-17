#include "stdafx.h"
#include "Panel.h"

Panel::Panel(  ) {

	size.x = 300;
	size.y = 600;

	panelShape.setSize( size );
	panelShape.setPosition( 600, 0 );
	panelShape.setFillColor( Color(0, 0, 0, 120) );

}

RectangleShape Panel::getShape( ) {
	return panelShape;
}