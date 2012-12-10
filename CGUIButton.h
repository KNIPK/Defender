/*!
 * Defender Map Editor -- CGUIButton.h
 * Potomek AGUIWidget.h
 */
#ifndef __CGUIBUTTON_H__
#define __CGUIBUTTON_H__

#include "AGUIWidget.h"

class CGUIButton : public AGUIWidget
{
private:
    string name;
    // id?
    sf::Rect<int> bounds;
    void (*onLMBUp)(sf::Event&);

    //! Grafika Testowa (Zastepcza)
    sf::RectangleShape foreground;
public:
    CGUIButton(string _name, sf::Rect<int> _bounds, void (*_onLMBUp)(sf::Event&));

    void exeLMBUp(sf::Event& event);

    void draw(sf::RenderWindow& window);
};


#endif
