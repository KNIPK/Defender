/*!
 * Defender Map Editor -- CAsset.h
 */
#ifndef __CASSET_H__
#define __CASSET_H__

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include <string>
#include <vector>

using namespace std;

class CAsset
{
private:
    //!General
    string name;
    int id;
    // TODO (Ktokolwiek#2#): Stworzyæ enum E_ASSET_TYPE wskazuj¹cy typ assetu?

    //!Physics
    b2BodyDef* bodyDef;
    b2Body* body;
    b2PolygonShape* shape;
    b2Fixture* fixture;

    //!Graphics
    sf::Image* image;
    sf::Sprite* sprite;
public:
    CAsset();

    ~CAsset();
};

#endif
