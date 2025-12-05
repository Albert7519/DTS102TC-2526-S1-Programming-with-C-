#include <iostream>

using namespace std;

int main() {
    int base, originalBase, years;
    double increase;
    base = 10000;
    originalBase = base;
    increase = 0.07;
    years = 0;

    while (base < 2*originalBase) { 
        base = base + (base * increase);
        years++;
    }

    cout << "It will take " << years << " years for double." << endl;
}