#include "Rectangle2D.hpp"
#include <cstdbool>
#include <cstdlib>
#include <cmath>
#include "stdio.h"
using namespace std;

//constructs default Rectangle2D object with center at (0,0) and width=height=1
Rectangle2D::Rectangle2D()
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}
//constructs Rectangle2D object usine new data
Rectangle2D::Rectangle2D(double x1, double y1, double width1, double height1)
{
    x = x1;
    y = y1;
    width = width1;
    height = height1;
}
//defines get functions that return the values of x, y, width, and height
const double Rectangle2D::getX()
{
    return x;
}
const double Rectangle2D::getY()
{
    return y;
}
const double Rectangle2D::getWidth()
{
    return width;
}
const double Rectangle2D::getHeight()
{
    return height;
}
//defines constant functions that return area and perimeter
const double Rectangle2D::getArea()
{
    return width*height;
}
const double Rectangle2D::getPerimeter()
{
    return (2*width)+(2*height);
}
//defines function that returns if the specified point is in the rectangle
const bool Rectangle2D::contains(double x2, double y2)
{
    //initializes bool variable containsP to false
    bool containsP=false;
    double x, y, width, height;
    //calls get functions to get x and y values
    x = getX();
    y = getY();
    width = getWidth();
    height = getHeight();
    //uses if statement to determine if the point is in the rectangle
    if(x2<=(x+.5*width) && x2>=(x-.5*width))
    {
        if(y2<=(y+.5*height) && y2>=(y-.5*height))
            containsP=true;
    }
    return containsP;
}
//defines function that returns if specified rectangle is in the rectangle
const bool Rectangle2D::contains(const Rectangle2D &r)
{
    //intializes bool variable containsR to false
    bool containsR=false;
    double x, y, w, h, x1, y1, w1, h1;
    //calls get functions to get x and y values
    x = getX();
    y = getY();
    w = getWidth();
    h = getHeight();
    x1 = ;
    y1 = ;
    w1 = ;
    h1 = ;
    if(w1<=w && h1<=h)
    {
        if(abs(x1-x)<(w-w1) && abs(y1-y)<(h-h1))
            containsR=true;
    }
    return containsR;
}
//defines function that returns if the rectangles overlap
const bool Rectangle2D::overlaps(const Rectangle2D &r)
{
    bool overlaps=false;
    
    return overlaps;
}
