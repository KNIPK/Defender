/*!
 * Defender Editor Map -- CGUIPanel.cpp
 */
#include "CGUIPanel.h"
#include <stdio.h>

CGUIPanel::CGUIPanel(string _name, sf::Rect<int> _bounds, AGUILayoutBase* _layout, int _id):
    name(_name), bounds(_bounds),
    layout(_layout), id(_id),
    background(sf::Vector2f(_bounds.width, _bounds.height))
{
    background.setPosition(bounds.left, bounds.top);
}

void CGUIPanel::addButton(string _name, int width/*sf::Rect<int> _bounds*/, void (*_fun)(sf::Event&))
{
    // TODO
    sf::Rect<int> _bounds = layout->getCell(width);
    widgets.push_back(new CGUIButton(_name, _bounds, _fun));
    return;
}

void CGUIPanel::onLMBUp()
{
    printf("Test onLMBUp() panel\n");
    return;
}

void CGUIPanel::drawAll(sf::RenderWindow& window)
{
    window.draw(background);
    return;
}
