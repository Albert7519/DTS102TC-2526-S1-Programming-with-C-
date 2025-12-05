#include "Rectangle2D.h"

#include <algorithm>
#include <iostream>
#include <set>

const int SIZE = 2;
Rectangle2D getRectangle(const double points[][SIZE], int n) {
    if (n == 0) return Rectangle2D(0, 0, 0, 0);

    double minX = points[0][0], maxX = points[0][0];
    double minY = points[0][1], maxY = points[0][1];

    for (int i = 1; i < n; i++) {
        if (points[i][0] < minX) minX = points[i][0];
        if (points[i][0] > maxX) maxX = points[i][0];
        if (points[i][1] < minY) minY = points[i][1];
        if (points[i][1] > maxY) maxY = points[i][1];
    }

    double width = maxX - minX;
    double height = maxY - minY;
    double centerX = minX + width / 2;
    double centerY = minY + height / 2;

    return Rectangle2D(centerX, centerY, width, height);
}

Rectangle2D* getRectanglePointer(const double points[][SIZE], int n) {
    if (n == 0) return new Rectangle2D(0, 0, 0, 0);

    double minX = points[0][0], maxX = points[0][0];
    double minY = points[0][1], maxY = points[0][1];

    for (int i = 1; i < n; i++) {
        if (points[i][0] < minX) minX = points[i][0];
        if (points[i][0] > maxX) maxX = points[i][0];
        if (points[i][1] < minY) minY = points[i][1];
        if (points[i][1] > maxY) maxY = points[i][1];
    }

    double width = maxX - minX;
    double height = maxY - minY;
    double centerX = minX + width / 2;
    double centerY = minY + height / 2;

    return new Rectangle2D(centerX, centerY, width, height);
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
