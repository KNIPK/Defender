/*!
 * Defender Map Editor -- CEventReceiver.h
 */
#ifndef __CEVENTRECEIVER_H__
#define __CEVENTRECEIVER_H__

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "SContext.h"

class CEventReceiver
{
private:
    SContext& context;
public:
    CEventReceiver(SContext& _context);

    bool dispatchEvent(sf::Event& event);
};

#endif
