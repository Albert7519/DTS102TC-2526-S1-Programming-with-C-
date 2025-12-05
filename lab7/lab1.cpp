#include <iostream>
using namespace std;

double min(double array[], int size);

double min(double array[], int size)
{
    double max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}


int main() {
    const int size = 10;
    double list[size];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> list[i];
    }
    cout << "The minimum number is: " << min(list, size) << endl;
    return 0;
}