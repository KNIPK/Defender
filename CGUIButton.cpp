/*!
 * Defender Map Editor -- CGUIButton.cpp
 */
#include "CGUIButton.h"

CGUIButton::CGUIButton(string _name, sf::Rect<int> _bounds,
                       void (*_onLMBUp)(sf::Event&)):
    name(_name), bounds(_bounds), onLMBUp(_onLMBUp),
    foreground(sf::Vector2f(_bounds.width, _bounds.height))
{
    foreground.setPosition(bounds.top, bounds.left);
}

void CGUIButton::exeLMBUp(sf::Event& event)
{
    onLMBUp(event);
}

void CGUIButton::draw(sf::RenderWindow& window)
{

    return;
}
