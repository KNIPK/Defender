/*!
 * Defender Map Editor -- CGUIManager.h
 */
#ifndef __CGUIMANAGER_H__
#define __CGUIMANAGER_H__

#include <string>
#include <vector>
#include "CGUIPanel.h"

using namespace std;

class CGUIManager
{
private:
    static int panelCount;
    vector<CGUIPanel*> panels;
public:
    CGUIManager();

    CGUIPanel* registerPanel(string _name, sf::Rect<int> _bounds,
                       AGUILayoutBase* _layout, int id = 0);

    void onLMBUp(sf::Event& event);

    void drawAll(sf::RenderWindow& window);

    CGUIPanel* getPanel(int number);
};

#endif
