#include <iostream>

using namespace std;

void swap1(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap2(int& n1, int& n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swap3(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap4(int* &p1, int* &p2)
{
    int* temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}

int main()
{
    int num1 = 1;
    int num2 = 2;

    cout << "Before invoking the swap1 function: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    swap1(num1, num2);
    cout << "After invoking the swap1 function: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl << endl;

    swap2(num1, num2);
    cout << "After invoking the swap2 function: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl << endl;

    swap3(&num1, &num2);
    cout << "After invoking the swap3 function: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl << endl;

    int* p1 = &num1;
    int* p2 = &num2;
    swap4(p1, p2);
    cout << "After invoking the swap4 function: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}