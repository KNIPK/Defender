#ifndef ENGINE_H_
#define ENGINE_H_

#include <string>

#include <SFML\Graphics.hpp>

class Engine
{
	sf::RenderWindow mainWindow;
	Engine();
public:
	static Engine& GetInstance();

	bool LoadSettings(std::string fileName = "config/config.cfg");
	bool SaveSettings(std::string fileName = "config/config.cfg");

	sf::RenderWindow& GetWindow() { return mainWindow; }
};

#endif
