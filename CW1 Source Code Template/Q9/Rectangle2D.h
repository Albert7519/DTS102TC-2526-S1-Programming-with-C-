#pragma once

#include <cmath>

/**
 * Define the Rectangle2D class that contains:
 *
 * 1. Two double data fields named x and y that specify the center of the
 *    rectangle with constant get functions and set functions. (Assume that the
 *    rectangle sides are parallel to x- or y-axes.)
 * 2. The double data fields width and height with constant get functions and
 *    set functions.
 * 3. A no-arg constructor that creates a default rectangle with (0, 0) for
 *    (x,y) and 1 for both width and height.
 * 4. A constructor that creates a rectangle with the specified x, y, width, and
 *    height.
 * 5. A constant function getArea() that returns the area of the rectangle.
 * 6. A constant function getPerimeter() that returns the perimeter of the
 *    rectangle.
 * 7. A constant function contains(double x, double y) that returns true if the
 *    specified point (x, y) is inside this rectangle. See Figure (a).
 * 8. A constant function contains(const Rectangle2D &r) that returns true if
 *    the specified rectangle is inside this rectangle. See Figure (b).
 * 9. A constant function overlaps(const Rectangle2D &r) that returns true if
 *    the specified rectangle overlaps with this rectangle. See Figure (c).
 */

class Rectangle2D {
   private:
    double x, y;  // Center of the rectangle
    double width, height;

   public:
    Rectangle2D();
    Rectangle2D(double x, double y, double width, double height);
    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);
    double getWidth() const;
    void setWidth(double width);
    double getHeight() const;
    void setHeight(double height);
    double getArea() const;
    double getPerimeter() const;
    bool contains(double x, double y) const;
    bool contains(const Rectangle2D &r) const;
    bool overlaps(const Rectangle2D &r) const;
    
};
