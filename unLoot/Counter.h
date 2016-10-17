#pragma once
#include <SFML\Graphics.hpp>
#include <sstream>

using namespace sf;

class Counter {
private:
	Font font;
	Text text;

	FloatRect bounds;

	int counter;

public:
	Counter( );

	void increment( );

	Text getText( );

};