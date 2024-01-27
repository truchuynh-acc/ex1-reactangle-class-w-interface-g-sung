/** RectangleInterface Code; Template with the essential functions */

#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

class RectangleInterface
{

public:
/** Updates the radius of this Circle
	 @param  newLength and newWidth are the new lengths and width for the Rectangle
	 @pre    newLength and newWidth must be larger than zero
	 @post   If newLength and newWidth are valid, the length and width
	         of this object is set to newLength and newWidth
			 Otherwise, user is prompted to input a valid entry 
	 @return  True if this object is updated. */ 

    virtual bool setParameters(double newLength, double newWidth) = 0;
    
    /* @return length of Rectangle */
    virtual double getLength() const = 0;

    /* @return width of Rectangle */
    virtual double getWidth() const = 0;

    /* @return area of Rectangle */
    virtual double getArea() const = 0;

    /* Destroys this Rectangle and frees its assigned memory. */
    virtual ~RectangleInterface() {}
};

#endif

//test
