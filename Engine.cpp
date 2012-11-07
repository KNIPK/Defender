#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "Engine.h"

Engine::Engine()
{
	//to do
	LoadSettings();
	int w = 800, h = 600;
	std::istringstream(properties["screenWidth"]) >> w;
	std::istringstream(properties["screenHeight"]) >> h;
	
	mainWindow.create(sf::VideoMode(w,h), "Defender");
	//mainWindow.create(sf::VideoMode(800,600), "Defender");
}

Engine& Engine::GetInstance()
{
	static Engine singleton;
	return singleton;
}

bool Engine::LoadSettings(std::string fileName)
{
	std::fstream file(fileName.c_str(), std::ios_base::in);

	if(!file.is_open())
		return false;

	std::string tmp("");

	while(!file.eof())
	{
		std::getline(file, tmp);

		properties[tmp.substr(0, tmp.find_first_of('=')-1)] = tmp.substr(tmp.find_first_of('=')+1);

		std::cout<<tmp.substr(0, tmp.find_first_of('='))<<std::endl;
	}

	return true;
}