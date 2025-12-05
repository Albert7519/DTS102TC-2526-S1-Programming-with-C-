#include <iostream>

using namespace std;

int main() {
    int count = 0;          
    int number = 2;         
    
    while (count < 50) {    
        
        bool isPrime = true;
        for (int divisor = 2; divisor < number; divisor++) {
            if (number % divisor == 0) {
                isPrime = false;
                break;  
            }
        }
             
        if (isPrime) {
            count++;
            cout << number << " ";
            
            if (count % 10 == 0) {
                cout << endl;
            }
        }
        
        number++; 
    }
}