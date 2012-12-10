/*!
 * Defender Map Editor -- CGUIPanel.h
 */
#ifndef __CGUIPANEL_H__
#define __CGUIPANEL_H__

#include <vector>
#include "AGUILayoutBase.h"
#include "CGUIButton.h" //AGUIWidget.h

using namespace std;

class CGUIPanel
{
private:
    string name;
    int id;
    sf::Rect<int> bounds;
    AGUILayoutBase* layout;
    vector<AGUIWidget*> widgets;

    //! Grafika Testowa (Zastepcza)
    sf::RectangleShape background;
public:
    CGUIPanel(string _name, sf::Rect<int> _bounds, AGUILayoutBase* _layout, int _id);

    void addButton(string _name, int width, void (*_fun)(sf::Event&));

    void onLMBUp();

    void drawAll(sf::RenderWindow& window);

    int getBX1() { return bounds.left; }
    int getBY1() { return bounds.top; }
    int getBX2() { return bounds.left + bounds.width; }
    int getBY2() { return bounds.top + bounds.height; }
};

#endif
