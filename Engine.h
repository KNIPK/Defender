#ifndef ENGINE_H_
#define ENGINE_H_

#include <string>

#include <SFML\Graphics.hpp>

class Engine
{
	sf::Window mainWindow;
	Engine();
public:
	static Engine& GetInstance();

	bool LoadSettings(std::string fileName = "config/config.cfg");
	bool SaveSettings(std::string fileName = "config/config.cfg");
};

#endif