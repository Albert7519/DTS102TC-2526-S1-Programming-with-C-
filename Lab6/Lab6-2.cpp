#include <iostream>

using namespace std;

double max(double num1, double num2);

double max(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main()
{
    double i = 5.2;
    double j = 2.2;
    double k = max(i, j);
    cout << "The maximum between " << i <<
        " and " << j << " is " << k << endl;
    return 0;
}
