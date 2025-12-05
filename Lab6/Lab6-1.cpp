#include <iostream>

using namespace std;

bool primeDistinguish(int n);
int printPrimes(int countLimit);

bool primeDistinguish(int n) {
    if (n < 2) {
        return false;
    }

    for (int divisor = 2; divisor * divisor <= n; ++divisor) {
        if (n % divisor == 0) {
            return false;
        }
    }

    return true;
}

int printPrimes(int countLimit) {
    int count = 0;
    int number = 2;

    while (count < countLimit) {
        if (primeDistinguish(number)) {
            count++;
            cout << number << " ";
            if (count % 10 == 0) {
                cout << endl;
            }
        }
        number++;
    }
    return count;
}


int main() {
    const int targetCount = 50;
    printPrimes(targetCount);
    cout << endl;
    return 0;
}