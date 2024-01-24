/**Driver Code*/

/**
Programmer: Eugene 
Project number: 1
Project Desc: Quadratic Expression class
Course: COSC-2436-007 (92905) III Data Structures
Date: 
*/

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle newRectangle;

    double newLength;
    double newWidth;

    cout << "Initial state of the rectangle" << endl;
    cout << "length = " << newRectangle.getLength() << endl;
    cout << "width = " << newRectangle.getWidth() << endl;

    cout << "Enter the length" << endl;
    cin >> newLength;

    cout << "Enter the width" << endl;
    cin >> newWidth;

    while (!newRectangle.setParameters(newLength, newWidth)) {
        cout << "Invalid dimensions entered. Length and width must be positive numbers. Please enter a valid entry" << endl;
        
        cout << "Enter the length" << endl;
        cin >> newLength;

        cout << "Enter the width" << endl;
        cin >> newWidth;
    }

    cout << "New state of rectangle" << endl;
    cout << "length = " << newRectangle.getLength() << endl;
    cout << "width = " << newRectangle.getWidth() << endl;
    cout << "area = " << newRectangle.getArea() << endl;

    return 0; 
}