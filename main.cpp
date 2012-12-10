/*!
 * Defender Map Editor -- main.cpp
 */
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include "Engine.h"
#include "CEventReceiver.h"
#include "CMap.h"
#include "SGUIStructs.h"
#include "SContext.h"
#include "CGUIManager.h"
#include "CGUILayoutLined.h"
#include <iostream>

void buttonA(sf::Event& event)
{
    //std::printf("test przycisku A");
    return;
}

int main()
{
    bool render = true;

    sf::RenderWindow& window = Engine::GetInstance().GetWindow();
    //(sf::VideoMode(800, 600, 32), "Defender Map Editor");
    CGUIManager guimgr;
    CMap mapa;

    SContext context = { window, mapa.getWorld(), guimgr };
    CEventReceiver receiver(context);

    sf::Rect<int> lay1rect(20,20,100,100);
    CGUILayoutLined lay1(lay1rect, 10, 1);
    CGUIPanel* panel1 = NULL;
    panel1 = guimgr.registerPanel("test panel", lay1rect, (AGUILayoutBase*)&lay1);

    /* Czesc niedzialajaca, problemy z wskaznikami
    if (panel1 == NULL)
        printf("panel1 error\n");
    panel1->addButton("testus", 50, &buttonA);
    */

    while (window.isOpen())
    {
        sf::Event event;
        float32 timeStep = 1.0f / 60.0f;
        int32 velocityIterations = 2;
        int32 positionIterations = 6;

        while (window.pollEvent(event))
        {
            receiver.dispatchEvent(event);
        }
        if ( render ) context.world.Step(timeStep, velocityIterations, positionIterations);

        window.clear();

        guimgr.drawAll(window);

        window.display();
    }
    return 0;
}
