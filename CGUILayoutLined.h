/*!
 * Defender Map Editor -- CGUILayoutLined.h
 * Layout liniowy.
 */
#ifndef __CGUILAYOUTLINED_H__
#define __CGUILAYOUTLINED_H__

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "AGUILayoutBase.h"
#include "SGUIStructs.h"

class CGUILayoutLined : public AGUILayoutBase
{
private:
    sf::Rect<int> bounds;
    sf::Vector2i currentPoint;
    int lineHeight;
    int interlinia;
    E_ALIGN_H align_h;
    E_ALIGN_V align_v;


public:
    CGUILayoutLined(sf::Rect<int> _bounds,
                    int _lineHeight, int _interlinia,
                    E_ALIGN_H _align_h = EAH_LEFT,
                    E_ALIGN_V _align_v = EAV_TOP);

    sf::Rect<int> getCell(int _width);

    void nextRow();

    void setCellHeight(int _height);

    void setInterlinia(int _interlinia);


};

#endif
