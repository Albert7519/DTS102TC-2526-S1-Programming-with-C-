#include <iostream>

using namespace std;

int countLetters(const char s[]);

int countLetters(const char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i]))
        {
            count++;
        }
        
    }
    return count;
}

int main() {
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    cout << "The number of letters in the string is: " << countLetters(s) << endl;
    return 0;
}