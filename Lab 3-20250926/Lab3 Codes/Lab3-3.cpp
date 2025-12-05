#include <iostream>
using namespace std;
int main()
{
  // Prompt the user to enter weight in kilograms
  cout << "Enter weight in kilograms (kg): ";
  double weight;
  cin >> weight;
  // Prompt the user to enter height in meters
  cout << "Enter height in meters (m): ";
  double height;
  cin >> height;

  double bmi = weight / (height * height);
  // Display result
  cout << "BMI is " << bmi << endl;
  if (bmi < 18.5)
    cout << "Underweight" << endl;
  else if (bmi < 25)
    cout << "Normal" << endl;
  else if (bmi < 30)
    cout << "Overweight" << endl;
  else
    cout << "Obese" << endl;
  return 0;
}
