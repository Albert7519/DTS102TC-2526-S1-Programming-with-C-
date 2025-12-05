#include <iostream>
using namespace std;
int main()
{
    int seconds, minutes, hours;
    cout << "Enter time in seconds: ";
    cin >> seconds;
    minutes = seconds / 60;
    hours = minutes / 60;
    cout << "minutes: " << minutes <<endl;
    cout << "hours: " << hours << endl;
    return 0;
}