/*!
 * Defender Map Editor -- CMap.cpp
 */
#include "CMap.h"

CMap::CMap():
    vecGravity(.0f, 10.f), world(vecGravity)
{

}

bool CMap::loadMap()
{
    return false;
}

CMap::~CMap()
{

}

b2World& CMap::getWorld() { return world; }
