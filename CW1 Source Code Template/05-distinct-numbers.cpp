#include <iostream>

int main() {
    // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE
    
    int numbers[10];  // Store distinct values
    int size = 0;     // Indicate how many distict values are in the array numbers

    std::cout << "Enter ten integers: ";
    
    int temp;
    for (int i = 0; i < 10; i++) {
        std::cin >> temp;
        bool isDistinct = true;
        for (int j = 0; j < size; j++) {
            if (numbers[j] == temp) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            numbers[size] = temp;
            size++;
        }
    }

    std::cout << "The number of distinct numbers is " << size << std::endl;
    std::cout << "The distinct numbers are:"; // Note: Sample output shows space after colon? No, sample shows "The distinct numbers are: 1 2 3 6 4 5"
    for (int i = 0; i < size; i++) {
        std::cout << " " << numbers[i];
    }
    std::cout << std::endl;

    return 0;
}
