/*!
 * Defender Map Editor -- AGUILayoutBase.h
 * Abstrakcyjna klasa bazowa dla layoutów GUI.
 */
#ifndef __AGUILAYOUTBASE_H__
#define __AGUILAYOUTBASE_H__

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include "SGUIStructs.h"

using namespace std;

class AGUILayoutBase
{
private:
    int layoutType;
    string name;
    //int32 id;
public:
    AGUILayoutBase() {}

    virtual sf::Rect<int> getCell(int width) =0;

    virtual void nextRow() =0;

    virtual void setCellHeight(int height) =0;

    //virtual void registerPanel(sf::Rect<int> bounds, E_ALIGN_H _align_h,
    //                            E_ALIGN_V _align_v) =0;

    virtual ~AGUILayoutBase() {}
};

#endif
