#include <iostream>

using namespace std;

int main()
{
    double BMI, weight, height;
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    BMI = weight / (height * height);
    cout << "BMI is " << BMI << endl;
    if (BMI < 18.5)
    {
        cout << "You are underweight." << endl;
    }
    else if (BMI >= 18.5 && BMI < 24.9)
    {
        cout << "You are normal weight." << endl;
    }
    else
    {
        cout << "You are overweight." << endl;
    }
}