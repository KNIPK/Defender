#include "MenuState.h"

int MenuState::Run(PlayerData& data)
{
	sf::RenderWindow& window = Engine::GetInstance().GetWindow();
	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear();

		window.display();
	}
	// g³ówna funkcja stanu
	// to uzupe³nienia
	return -1; //tu bêdzie zwracany nr kolejnego stanu // do zrobienia //
}