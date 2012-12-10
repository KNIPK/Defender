/*!
 * Defender Map Editor -- CGUILayoutLined.cpp
 * Layout liniowy.
 */
#include "CGUILayoutLined.h"

CGUILayoutLined::CGUILayoutLined(sf::Rect<int> _bounds,
                                 int _lineHeight, int _interlinia,
                                 E_ALIGN_H _align_h, E_ALIGN_V _align_v):
    lineHeight(_lineHeight), interlinia(_interlinia),
    align_h(_align_h), align_v(_align_v)
{
    bounds.left = _bounds.left + 5;
    bounds.top = _bounds.top + 5;
    bounds.width = _bounds.width - 10;
    bounds.height = _bounds.height - 10;
    currentPoint.x = bounds.left;
    currentPoint.y = bounds.top;
}

sf::Rect<int> CGUILayoutLined::getCell(int _width)
{
    // TODO (Ktokolwiek#2#): Align'y
    // TODO (Ktokolwiek#3#): Sprawdzanie boundsów ?
    sf::Rect<int> retCell(currentPoint.x, currentPoint.y,
                      currentPoint.x+_width, currentPoint.y+lineHeight);
    currentPoint.x += _width + 1;
    return retCell;
}

void CGUILayoutLined::nextRow()
{
    // TODO (Ktokolwiek#2#): Align'y
    // TODO (Ktokolwiek#3#): Sprawdzanie boundsów !
    currentPoint.x = bounds.left;
    currentPoint.y += lineHeight + interlinia;
    return;
}

void CGUILayoutLined::setCellHeight(int _height)
{
    lineHeight = _height;
    return;
}

void CGUILayoutLined::setInterlinia(int _interlinia)
{
    interlinia = _interlinia;
    return;
}
