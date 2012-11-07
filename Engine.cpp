#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "Engine.h"

Engine::Engine()
{
	//to do
	LoadSettings();
	int w = 800, h = 600;
	w = atoi(properties["screenWidth"].c_str());
	h = atoi(properties["screenHeight"].c_str());

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

		int pos = tmp.find_first_of('=');
		//properties[tmp.substr(0, pos-1)] = tmp.substr(pos+1, tmp.length()-1);
		properties.insert(std::make_pair<std::string, std::string>(tmp.substr(0, pos),  tmp.substr(pos+1, tmp.length()-1))); 

		std::cout<<tmp.substr(0, pos)<<"\t"<<tmp.substr(pos+1, tmp.length()-1)<<std::endl;
	}

	return true;
}