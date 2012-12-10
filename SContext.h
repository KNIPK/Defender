/*!
 * Defender Map Editor -- Structures.h
 * Struktury, typedefy, enumy i inne.
 */
#ifndef __SCONTEXT_H__
#define __SCONTEXT_H__

#include <SFML/Window.hpp>
#include <Box2D/Box2D.h>
#include "CGUIManager.h"

struct SContext
{
    sf::RenderWindow& window;
    b2World& world;
    CGUIManager& guimgr;
};

#endif
