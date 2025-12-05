#include "Rectangle.h"

Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(double width, double height) {
    this->width = width;
    this->height = height;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    this->width = width;
}

double Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(double height) {
    this->height = height;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}
