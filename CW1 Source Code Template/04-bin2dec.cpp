#include <iostream>
#include <string>

int solve_bin_to_dec(const std::string& binaryString) {
   // WRITE YOUR CODE HERE. DO NOT CHANGE THE TEMPLATE

    int decimal = 0;
    int power = 1;
    for (int i = binaryString.length() - 1; i >= 0; i--) {
        if (binaryString[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }
    return decimal;}

int main() {
    std::cout << "Enter a bianry number: ";
    std::string bianryString;
    std::cin >> bianryString;
    std::cout << solve_bin_to_dec(bianryString) << std::endl;

    return 0;
}
