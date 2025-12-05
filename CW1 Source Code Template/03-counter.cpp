#include <iostream>
using namespace std;

int main() {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE

    int num;
    int countPositive = 0;
    int countNegative = 0;
    int totalCount = 0;
    int sum = 0;

    cout << "Enter an integer value, the input ends if it is 0: ";
    cin >> num;

    while (num != 0) {
        if (num > 0)
            countPositive++;
        else
            countNegative++;
        
        sum += num;
        totalCount++;
        cin >> num;
    }

    cout << "The number of positives is " << countPositive << endl;
    cout << "The number of negatives is " << countNegative << endl;
    cout << "The total value is " << sum << endl;
    cout << "The average value is " << (totalCount == 0 ? 0.0 : static_cast<double>(sum) / totalCount) << endl;


    return 0;
}