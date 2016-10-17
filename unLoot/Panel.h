#pragma once
#include <SFML\Graphics.hpp>
#include "Engine.h"

using namespace sf;

class Panel {
private:

	RectangleShape panelShape;

	Vector2f size;
	float height;
	float width;

public:
	Panel();

	RectangleShape getShape( );

};