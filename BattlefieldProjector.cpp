#include "BattlefieldProjector.h"

BattlefieldProjector::BattlefieldProjector(): window(Engine::GetInstance().GetWindow())
{
    currentState = 0;
    world = 0;
}

BattlefieldProjector::~BattlefieldProjector()
{
    //dtor
}

bool BattlefieldProjector::SetNewState(State *new_state)
{
    currentState = new_state;
    //window = Engine::GetInstance().GetWindow();

    w_scale = 1.0;
    h_scale = 1.0;

    M2P = 30.0;
    P2M = 1.0/M2P;

    const float RADTODEG = 180.0/M_PI;
    const float DEGTORAD = 1.0/RADTODEG;

    //currentState powinien zawierać b2World i inne informacje
    //BattlefieldProjector powinien tylko pobierać z niego zmienne i wyswietlac
    //ale na razie nie wiem jak beda one przechowywane
    if(world) {
        delete world;
        world = NULL;
    }

    world = new b2World(b2Vec2(0.0, 9.81), 1); // = currentState->GetB2WorldPtr();

    //platform
    b2BodyDef bodydef;
    bodydef.type = b2_staticBody;
    bodydef.position.Set((window.getSize().x >> 1) * P2M, (window.getSize().y - 50) *P2M);

    b2Body *tmpbody = world->CreateBody(&bodydef);

    b2PolygonShape shape;
    shape.SetAsBox((window.getSize().x >> 1) *P2M, 20*P2M);

    tmpbody->CreateFixture(&shape, 1.0);

    tmpbody->SetUserData(new b2Vec2(window.getSize().x , 40));

    //some body
    bodydef.type = b2_dynamicBody;
    bodydef.position.Set(200*P2M, 20*P2M);

    tmpbody = world->CreateBody(&bodydef);
    shape.SetAsBox(20*P2M, 20*P2M);
    tmpbody->CreateFixture(&shape, 1.0);

    tmpbody->SetUserData(new b2Vec2(40,40));
    ////

    //next one body
    bodydef.type = b2_dynamicBody;
    bodydef.position.Set(300*P2M, 30*P2M);
    bodydef.angle = 30 * DEGTORAD;

    tmpbody = world->CreateBody(&bodydef);
    shape.SetAsBox(20*P2M, 20*P2M);
    tmpbody->CreateFixture(&shape, 1.0);

    tmpbody->SetUserData(new b2Vec2(40,40));
    ////

}

void BattlefieldProjector::Update()
{
    M2P = 30.0;
    P2M = 1.0/M2P;

    const float RADTODEG = 180.0/M_PI;
    const float DEGTORAD = 1.0/RADTODEG;

    world->Step(1.0/30.0, 8, 8);
    b2Body *body_ptr = world->GetBodyList();

    while(body_ptr)
    {
        b2Fixture *fix = body_ptr->GetFixtureList();
        //getting x,y position of left-top corner
        float x = body_ptr->GetPosition().x - ((b2PolygonShape*)fix->GetShape())->GetVertex(2).x;
        float y = body_ptr->GetPosition().y - ((b2PolygonShape*)fix->GetShape())->GetVertex(2).y;
        sf::Image image;
        image.create(((b2Vec2*)body_ptr->GetUserData())->x,
                        ((b2Vec2*)body_ptr->GetUserData())->y,
                        sf::Color(0,0,255));
        sf::Texture aTexture;
        aTexture.loadFromImage(image);

        sf::Sprite Sprite;
        Sprite.setColor(sf::Color(0, 255, 255, 128));
        Sprite.setPosition(x*M2P, y*M2P);
        Sprite.setRotation(body_ptr->GetAngle() * RADTODEG); //dorobic konwersje z rad na stopnie
        //Sprite.SetCenter(0, 0);
        Sprite.setScale(w_scale, h_scale);
        //Sprite.setBlendMode(sf::Blend::Multiply); //wtf??
        Sprite.setTexture(aTexture);

        window.draw(Sprite);
        body_ptr = body_ptr->GetNext();

    }
}
