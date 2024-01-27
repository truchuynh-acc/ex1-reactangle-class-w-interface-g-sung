/**Rectangle.h Code, final version */

#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
private:
    double length, width;    
public:
    Rectangle();
    bool setParameters(double newLength, double newWidth);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
};

#endif