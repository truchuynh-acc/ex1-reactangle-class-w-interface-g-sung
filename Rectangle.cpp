/**Rectangle.cpp Code*/
#include "Rectangle.h"

Rectangle::Rectangle()
{
    length = 1.0;
    width = 1.0;
}

void Rectangle::setParameters(double newLength, double newWidth)
{
    if (newLength && newWidth > 0.0)
    {
        length = newLength;
        width = newWidth;
        return true;
    }
        return false;    
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getArea() const
{
    return length * width;
}
