#include <iostream>
#include <cmath>
using namespace std;

double min(double list[], int size)
{
  double min = list[0];

  for (int i = 1; i < size; i++)
    if (min > list[i])
      min = list[i];

  return min;
}

int main()
{
  const int SIZE = 10;
  double numbers[SIZE];
  cout << "Enter ten numbers: ";
  for (int i = 0; i < SIZE; i++)
  {
    cin >> numbers[i];
  }

  cout << "The minimum number is " << min(numbers, SIZE) << endl;

  return 0;
}
