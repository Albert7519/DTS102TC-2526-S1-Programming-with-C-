#include "Rectangle2D.h"

#include <algorithm>
#include <iostream>
#include <set>

const int SIZE = 2;
Rectangle2D getRectangle(const double points[][SIZE], int n) {
   // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE


}

Rectangle2D* getRectanglePointer(const double points[][SIZE], int n) {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE

    
}

int main() {
    double points[5][2];
    std::cout << "Enter five points: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> points[i][0] >> points[i][1];
    }

    Rectangle2D boundingRectangle = getRectangle(points, 5);
    std::cout << "The bounding rectangle's center (" << boundingRectangle.getX() << ", " << boundingRectangle.getY()
              << "), width " << boundingRectangle.getWidth() << ", height " << boundingRectangle.getHeight()
              << std::endl;

    Rectangle2D* boundingRectangleP = getRectanglePointer(points, 5);
    std::cout << "The bounding rectangle's center (" << boundingRectangleP->getX() << ", " << boundingRectangleP->getY()
              << "), width " << boundingRectangleP->getWidth() << ", height " << boundingRectangleP->getHeight()
              << std::endl;

    return 0;
}
