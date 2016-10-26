#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp
#include <stdio.h>
#include <cstdbool>
using namespace std;

class Rectangle2D
{
private:
    //declares two double data fields that specify center of rectangle, and width and height
    double x, y, width, height;
public:
    //function that creates default rectangle
    Rectangle2D();
    //declares get functions that return the values of x, y, width, and height
    const double getX(), getY();
    const double getWidth(), getHeight();
    //declares function that creates rectangle using new values
    Rectangle2D(double x1, double y1, double width1, double height1);
    //declares constant functions that return area and perimeter
    const double getArea(), getPerimeter();
    //declares function that returns if the specified point is in the rectangle
    const bool contains(double x2, double y2);
    //declares function that returns if specified rectangle is in the rectangle
    const bool contains(const Rectangle2D &r);
    //declares function that returns if the rectangles overlap
    const bool overlaps(const Rectangle2D &r);
};

#endif /* Rectangle2D_hpp */
