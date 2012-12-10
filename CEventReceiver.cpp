/*!
 * Defender Map Editor -- CEventReceiver.cpp
 */
#include "CEventReceiver.h"

CEventReceiver::CEventReceiver(SContext& _context):
    context(_context)
{

}

bool CEventReceiver::dispatchEvent(sf::Event& event)
{
    switch (event.type)
    {
    case sf::Event::MouseButtonReleased:
        context.guimgr.onLMBUp(event);
        break;
    case sf::Event::Closed:
        context.window.close();
        break;
    default:
        break;
    }

    return false;
}
