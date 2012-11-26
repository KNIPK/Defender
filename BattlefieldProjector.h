#ifndef BATTLEFIELDPROJECTOR_H
#define BATTLEFIELDPROJECTOR_H

#include "State.h"
#include "Engine.h"
#include <Box2D/Box2D.h>

class BattlefieldProjector
{
    State *currentState;
    sf::RenderWindow & window;

    float w_scale;
    float h_scale;

    float M2P; //metr to pix
    float P2M; // pix to metr

    b2World *world;

//funkcje pozwalajace wyswietlac podstawowe prymitywy, później moga to byc np same textury czy cos
//mysle, ze argumenetem bedzie jakas bardzies zaawansowana klasa, a nie b2Body,
//ktora bedzie miala informacje na temat textur itp
    void showRect(b2Body *body);//rectangle
    //void showPoly(b2Body *body);//polygon
    //void showCircle(b2Body *body);

    public:
        BattlefieldProjector();
        ~BattlefieldProjector();

        bool SetNewState(State *new_state);

        void Update();
};

#endif // BATTLEFIELDPROJECTOR_H
