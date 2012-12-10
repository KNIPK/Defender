/*!
 * Defender Map Editor -- CMap.h
 */
#ifndef __CMAP_H__
#define __CMAP_H__

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include <string>
#include <vector>
#include "CAsset.h"

using namespace std;

class CMap
{
private:
    //!General
    string mapName;

    //!Physics
    b2Vec2 vecGravity;
    b2World world;
    b2BodyDef groundBodyDef;
    float worldScale;

    vector<b2JointDef*> listJointDef;
    vector<b2Joint*> listJoint;

    //!Graphics
    sf::Image worldImage;
    sf::Sprite worldSprite;

    //!Assets
    vector<CAsset*> listAsset;
public:
    CMap();

    // TODO (Ktokolwiek#1#): Stworzyæ konstruktor z parametrem w postaci uchwytu do pliku

    b2World& getWorld();

    bool loadMap();

    ~CMap();
};

#endif
