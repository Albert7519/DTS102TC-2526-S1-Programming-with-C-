#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    double a, b, c;
    double r1, r2, d;

    cout << "Enter a, b, c: ";
  
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;
    if (d < 0) {
        cout << "The equation has no real roots." << endl;
        return 0;
    }
    r1 = (-b + pow(d, 0.5)) / (2 * a);
    r2 = (-b - pow(d, 0.5)) / (2 * a);

    cout << "The root is " << r1 << endl;
   
    cout << "The roots are " << r1 << " and " << r2 << endl;

    return 0;
}