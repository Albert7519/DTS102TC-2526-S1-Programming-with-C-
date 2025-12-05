#include <iostream>

using namespace std;

int main() {
    int n1, n2, comDiv, biggestDiv;
    comDiv = 1;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    while(comDiv < n1 or comDiv < n2) {
        if(n1 % comDiv == 0 and n2 % comDiv == 0) {
            biggestDiv = comDiv;
        }
        comDiv++;
    }
    cout << "The greatest common divisor is: " << biggestDiv << endl;
}