#include <iostream>
#include "Rectangle2D.h"

int main() {
    Rectangle2D r1(2, 2, 5.5, 4.9);
    std::cout << "Area: " << r1.getArea() << std::endl;
    std::cout << "Perimeter: " << r1.getPerimeter() << std::endl;
    
    // Test boundary condition
    // Center (2, 2), Width 5.5, Height 4.9
    // X range: [2 - 2.75, 2 + 2.75] = [-0.75, 4.75]
    // Y range: [2 - 2.45, 2 + 2.45] = [-0.45, 4.45]
    
    std::cout << "Contains (3, 3): " << (r1.contains(3, 3) ? "true" : "false") << std::endl;
    std::cout << "Contains (4.75, 2): " << (r1.contains(4.75, 2) ? "true" : "false") << std::endl; // Boundary
    
    return 0;
}
