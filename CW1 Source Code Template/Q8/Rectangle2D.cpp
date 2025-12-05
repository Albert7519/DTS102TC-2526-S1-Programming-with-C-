#include "Rectangle2D.h"

Rectangle2D::Rectangle2D() {
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double width, double height) {
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

double Rectangle2D::getX() const { return x; }
void Rectangle2D::setX(double x) { this->x = x; }
double Rectangle2D::getY() const { return y; }
void Rectangle2D::setY(double y) { this->y = y; }
double Rectangle2D::getWidth() const { return width; }
void Rectangle2D::setWidth(double width) { this->width = width; }
double Rectangle2D::getHeight() const { return height; }
void Rectangle2D::setHeight(double height) { this->height = height; }

double Rectangle2D::getArea() const {
    return width * height;
}

double Rectangle2D::getPerimeter() const {
    return 2 * (width + height);
}

bool Rectangle2D::contains(double x, double y) const {
    return x >= (this->x - width / 2) && x <= (this->x + width / 2) &&
           y >= (this->y - height / 2) && y <= (this->y + height / 2);
}

bool Rectangle2D::contains(const Rectangle2D &r) const {
    return r.x - r.width / 2 >= this->x - this->width / 2 &&
           r.x + r.width / 2 <= this->x + this->width / 2 &&
           r.y - r.height / 2 >= this->y - this->height / 2 &&
           r.y + r.height / 2 <= this->y + this->height / 2;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {
    return !(r.x - r.width / 2 >= this->x + this->width / 2 ||
             r.x + r.width / 2 <= this->x - this->width / 2 ||
             r.y - r.height / 2 >= this->y + this->height / 2 ||
             r.y + r.height / 2 <= this->y - this->height / 2);
}
