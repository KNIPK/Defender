#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>

#include "Engine.h"

Engine::Engine()
{
	//to do
	mainWindow.create(sf::VideoMode(800,600), "Defender");
}

Engine& Engine::GetInstance()
{
	static Engine singleton;
	return singleton;
}