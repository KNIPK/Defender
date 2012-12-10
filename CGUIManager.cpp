/*!
 * Defender Map Editor -- CGUIManager.cpp
 */
#include "CGUIManager.h"

int CGUIManager::panelCount = 0;

CGUIManager::CGUIManager()
{

}

CGUIPanel* CGUIManager::registerPanel(string _name, sf::Rect<int> _bounds, AGUILayoutBase* _layout, int id)
{
    // TODO
    panelCount += 1;
    panels.push_back(new CGUIPanel(_name, _bounds, _layout, id?id:panelCount));
    return panels[panelCount];
}

void CGUIManager::onLMBUp(sf::Event& event)
{
    vector<CGUIPanel*>::iterator pr;
    for (pr = panels.begin(); pr != panels.end(); pr++)
    {
        if (event.mouseButton.x >= (*pr)->getBX1() && event.mouseButton.x <= (*pr)->getBX2() &&
            event.mouseButton.y >= (*pr)->getBY1() && event.mouseButton.y <= (*pr)->getBY2())
        {
            (*pr)->onLMBUp();
            return;
        }
    }
    return;
}

void CGUIManager::drawAll(sf::RenderWindow& window)
{
    static vector<CGUIPanel*>::iterator pr;
    for (pr = panels.begin(); pr!=panels.end(); pr++)
    {
        (*pr)->drawAll(window);
    }
    return;
}

CGUIPanel* CGUIManager::getPanel(int number)
{
    return panels[number];
}
