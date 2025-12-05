#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    double x = 0;
    double y = 0;
    double circle = 1.0;
    int numberOfHits = 0, all = 1000000;

    srand(time(0));

    for (int i = 0; i < all; i++) {
        x = 2.0 * rand() / RAND_MAX - 1.0;
        y = 2.0 * rand() / RAND_MAX - 1.0;
        if (pow(x, 2) + pow(y, 2) <1) {
            numberOfHits++;
        }
    }

    cout << "Approximation of Pi: " << 4.0 * numberOfHits / all << endl;
}