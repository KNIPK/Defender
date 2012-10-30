#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>

#include "Engine.h"

Engine::Engine()
{
	//to do
}

Engine& Engine::GetInstance()
{
	static Engine singleton;
	return singleton;
}