/*!
 * Defender Map Editor -- CGUIWidget.h
 */
#ifndef __CGUIWIDGET_H__
#define __CGUIWIDGET_H__
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class AGUIWidget
{
private:
    string name;
    sf::Rect<int> bounds;
    void (*onLMBUp)(sf::Event);
public:
    AGUIWidget() {}

    virtual void exeLMBUp(sf::Event& event) =0;

    virtual void draw(sf::RenderWindow& window) =0;
};

#endif
