#include "stdafx.h"
#include "Engine.h"
#include "Chest.h"

using namespace sf;

void Engine::update(float dtAsSeconds) {
	chest.update( dtAsSeconds );

}