#include <iostream>
#include "Rectangle2D.h"

int main() {
    // Gradescope test case reconstruction:
    // Constructor r(3, 4, 5, 6) -> x=3, y=4, width=5, height=6
    Rectangle2D r(3, 4, 5, 6);
    
    // Expected boundary:
    // X: [3 - 2.5, 3 + 2.5] = [0.5, 5.5]
    // Y: [4 - 3.0, 4 + 3.0] = [1.0, 7.0]

    bool p1 = r.contains(3.0, 7.0); // Failed on Gradescope (Expected True)
    bool p2 = r.contains(3.0, 1.0); // Failed on Gradescope (Expected True)
    
    std::cout << "Test r(3,4,5,6) contains (3,7): " << (p1 ? "PASS" : "FAIL") << std::endl;
    std::cout << "Test r(3,4,5,6) contains (3,1): " << (p2 ? "PASS" : "FAIL") << std::endl;

    return 0;
}
