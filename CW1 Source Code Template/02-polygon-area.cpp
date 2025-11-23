#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE

    int n;
    double s, area;
    
    cout << "Enter the number of sides: ";
    cin >> n;

    cout << "Enter the length of a side: ";
    cin >> s;

    area = (n * s * s) / (4 * tan(M_PI / n));

    cout << "The area of the polygon is " << area << endl;

    return 0;
}
