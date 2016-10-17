#include "stdafx.h"
#include "Panel.h"

Panel::Panel(  ) {

	size.x = 200;
	size.y = 600;

	panelShape.setSize( size );
	panelShape.setPosition( 600, 0 );

}

RectangleShape Panel::getShape( ) {
	return panelShape;
}