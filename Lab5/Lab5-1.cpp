#include <iostream>

using namespace std;

int main() {
    int sum = 0;

    while (true) {
        int number;
        cout << "Enter an integer (0 to stop): ";
        cin >> number;

        if (number == 0) {
            break;
        }

        sum += number;
    }
    cout << "The sum is: " << sum << endl;
}