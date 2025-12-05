# DTS102TC Programming with C++ Coursework 1 - Assignment Report

## Question 1. Algebra: solve quadratic equations

### 1. Key Function Analysis
The program solves a quadratic equation $ax^2 + bx + c = 0$. The key logic resides in the `main` function:
1.  It reads three coefficients `a`, `b`, and `c` from the user.
2.  It calculates the discriminant $d = b^2 - 4ac$.
3.  It uses conditional statements (`if-else`) to handle three cases:
    *   If $d > 0$, there are two distinct real roots. The roots are calculated using the quadratic formula: $r_{1,2} = \frac{-b \pm \sqrt{d}}{2a}$.
    *   If $d = 0$, there is one real root (repeated), calculated as $r = \frac{-b}{2a}$.
    *   If $d < 0$, the equation has no real roots.

### 2. Program Code
```cpp
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    double r1, r2, d;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + pow(d, 0.5)) / (2 * a);
        r2 = (-b - pow(d, 0.5)) / (2 * a);
        cout << "The roots are " << r1 << " and " << r2 << endl;
    } else if (d == 0) {
        r1 = -b / (2 * a);
        cout << "The root is " << r1 << endl;
    } else {
        cout << "The equation has no real roots" << endl;
    }

    return 0;
}
```

### 3. Testing and Execution
**Test Case 1:**
Input: `1.0 3 1`
Output:
```
Enter a, b, c: 1.0 3 1
The roots are -0.381966 and -2.61803
```
*Analysis: Discriminant is positive ($3^2 - 4(1)(1) = 5$), resulting in two real roots.*

---

## Question 2. Geometry: area of a regular polygon

### 1. Key Function Analysis
The program calculates the area of a regular polygon.
1.  It prompts the user for the number of sides `n` and the length of a side `s`.
2.  It uses the mathematical formula: $Area = \frac{n \times s^2}{4 \times \tan(\frac{\pi}{n})}$.
3.  The value of $\pi$ is defined as a constant `3.14159`. The `tan` function from `<cmath>` is used for the calculation.

### 2. Program Code
```cpp
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    double s, area;
    
    cout << "Enter the number of sides: ";
    cin >> n;

    cout << "Enter the length of a side: ";
    cin >> s;

    const double PI = 3.14159;
    area = (n * s * s) / (4 * tan(PI / n));

    cout << "The area of the polygon is " << area << endl;

    return 0;
}
```

### 3. Testing and Execution
**Test Case 1:**
Input: `5 6.5`
Output:
```
Enter the number of sides: 5
Enter the length of a side: 6.5
The area of the polygon is 72.6903
```

---

## Question 3. Count positive and negative numbers and compute the average of numbers

### 1. Key Function Analysis
The program reads an unspecified number of integers until 0 is entered.
1.  It initializes counters for positive numbers, negative numbers, total count, and a sum accumulator.
2.  A `while` loop continues as long as the input `num` is not 0.
3.  Inside the loop, it checks if the number is positive or negative and increments the respective counter. It also adds the number to `sum`.
4.  Finally, it calculates the average (casting `sum` to `double` to ensure floating-point division) and prints the statistics.

### 2. Program Code
```cpp
#include <iostream>
using namespace std;

int main() {
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
```

### 3. Testing and Execution
**Test Case 1:**
Input: `1 2 -1 3 0`
Output:
```
Enter an integer value, the input ends if it is 0: 1 2 -1 3 0
The number of positives is 3
The number of negatives is 1
The total value is 5
The average value is 1.25
```

---

## Question 4. Convert binary to decimal

### 1. Key Function Analysis
The function `solve_bin_to_dec` converts a binary string to a decimal integer.
1.  It iterates through the binary string from the last character (least significant bit) to the first.
2.  It maintains a `power` variable (initially 1, representing $2^0$).
3.  If the current character is '1', it adds the current `power` value to the `decimal` result.
4.  In each iteration, `power` is multiplied by 2.

### 2. Program Code
```cpp
#include <iostream>
#include <string>

int solve_bin_to_dec(const std::string& binaryString) {
    int decimal = 0;
    int power = 1;
    for (int i = binaryString.length() - 1; i >= 0; i--) {
        if (binaryString[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }
    return decimal;
}

int main() {
    std::cout << "Enter a bianry number: ";
    std::string bianryString;
    std::cin >> bianryString;
    std::cout << solve_bin_to_dec(bianryString) << std::endl;

    return 0;
}
```

### 3. Testing and Execution
**Test Case 1:**
Input: `11001`
Output:
```
Enter a bianry number: 11001
25
```
*Analysis: $1 \times 2^4 + 1 \times 2^3 + 0 \times 2^2 + 0 \times 2^1 + 1 \times 2^0 = 16 + 8 + 1 = 25$.*

---

## Question 5. Distinct numbers

### 1. Key Function Analysis
The program reads ten numbers and displays only the distinct ones.
1.  It uses an array `numbers` to store distinct values found so far.
2.  For each input number, it iterates through the stored `numbers` to check for duplicates.
3.  If the number is not found in the array (`isDistinct` is true), it is added to the array, and the `size` counter is incremented.

### 2. Program Code
```cpp
#include <iostream>

int main() {
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
    std::cout << "The distinct numbers are:";
    for (int i = 0; i < size; i++) {
        std::cout << " " << numbers[i];
    }
    std::cout << std::endl;

    return 0;
}
```

### 3. Testing and Execution
**Test Case 1:**
Input: `1 2 3 2 1 6 3 4 5 2`
Output:
```
Enter ten integers: 1 2 3 2 1 6 3 4 5 2
The number of distinct numbers is 6
The distinct numbers are: 1 2 3 6 4 5
```

---

## Question 6. Sum elements column by column

### 1. Key Function Analysis
The function `sumColumn` calculates the sum of elements in a specific column of a matrix.
1.  It takes a 2D array `m`, the number of rows, and the target `columnIndex` as arguments.
2.  It iterates through the rows (`i` from 0 to `rowSize - 1`) while keeping the column index fixed.
3.  It accumulates the values into `sum` and returns the result.

### 2. Program Code
```cpp
#include <iostream>

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    double matrix[3][SIZE]{};

    std::cout << "Enter a 3-by-4 matrix row by row: " << std::endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < SIZE; j++)
        std::cout << "Sum of the elements at column " << j << " is " << sumColumn(matrix, 3, j) << std::endl;

    return 0;
}
```

### 3. Testing and Execution
**Test Case 1:**
Input:
```
1 2 3 4
5 6 7 8
9 10 11 12
```
Output:
```
Enter a 3-by-4 matrix row by row: 
Sum of the elements at column 0 is 15
Sum of the elements at column 1 is 18
Sum of the elements at column 2 is 21
Sum of the elements at column 3 is 24
```

---

## Question 7. The Rectangle class

### 1. Key Function Analysis
The `Rectangle` class encapsulates the properties of a rectangle.
1.  **Constructors**: A default constructor initializes width and height to 1. A parameterized constructor allows setting custom dimensions.
2.  **Accessors/Mutators**: `getWidth`, `setWidth`, etc., allow controlled access to private data members.
3.  **Methods**: `getArea()` returns `width * height`, and `getPerimeter()` returns `2 * (width + height)`.

### 2. Program Code (Rectangle.h & Rectangle.cpp)
*(Header file defines the class structure, implementation file contains the logic)*
```cpp
// Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(double width, double height) {
    this->width = width;
    this->height = height;
}

double Rectangle::getArea() const {
    return width * height;
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}
// ... (Getters and Setters omitted for brevity)
```

### 3. Testing and Execution
**Test Case:**
Creating two rectangles:
1. Width 4, Height 40
2. Width 3.5, Height 35.9

Output:
```
Rectangle 1:
Width: 4 Height: 40
Area: 160 Perimeter: 88
Rectangle 2:
Width: 3.5 Height: 35.9
Area: 125.65 Perimeter: 78.8
```

---

## Question 8. The Rectangle2D class

### 1. Key Function Analysis
The `Rectangle2D` class extends the concept to a 2D plane with a center point (x, y).
1.  **contains(double x, double y)**: Checks if a point is within the rectangle boundaries by comparing coordinates against `x +/- width/2` and `y +/- height/2`.
2.  **contains(const Rectangle2D &r)**: Checks if another rectangle `r` is entirely inside the current one.
3.  **overlaps(const Rectangle2D &r)**: Checks if two rectangles intersect. It returns true unless they are completely separated (e.g., one is to the left of the other).

### 2. Program Code (Rectangle2D.cpp)
```cpp
// ... (Constructors and Getters/Setters)

bool Rectangle2D::contains(double x, double y) const {
    return x >= (this->x - width / 2) && x <= (this->x + width / 2) &&
           y >= (this->y - height / 2) && y <= (this->y + height / 2);
}

bool Rectangle2D::contains(const Rectangle2D &r) const {
    return r.x - r.width / 2 >= this->x - this->width / 2 &&
           r.x + r.width / 2 <= this->x + this->width / 2 &&
           r.y - r.height / 2 >= this->y - this->height / 2 &&
           r.y + r.height / 2 <= this->y + this->height / 2;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const {
    return !(r.x - r.width / 2 >= this->x + this->width / 2 ||
             r.x + r.width / 2 <= this->x - this->width / 2 ||
             r.y - r.height / 2 >= this->y + this->height / 2 ||
             r.y + r.height / 2 <= this->y - this->height / 2);
}
```

### 3. Testing and Execution
**Test Case:**
Rectangle `r1` at (2, 2) with width 5.5, height 4.9.
Output:
```
Area: 26.95
Perimeter: 20.8
Contains (3, 3): true
Contains (4.75, 2): false
```

---

## Question 9. The Bounding Rectangle

### 1. Key Function Analysis
The `getRectangle` function calculates the bounding box for a set of 2D points.
1.  It iterates through the array of points to find the minimum and maximum x and y coordinates (`minX`, `maxX`, `minY`, `maxY`).
2.  The width of the bounding rectangle is `maxX - minX`.
3.  The height is `maxY - minY`.
4.  The center `(x, y)` is the midpoint: `minX + width / 2` and `minY + height / 2`.

### 2. Program Code
```cpp
Rectangle2D getRectangle(const double points[][SIZE], int n) {
    // ... (Initialization of min/max)

    for (int i = 1; i < n; i++) {
        if (points[i][0] < minX) minX = points[i][0];
        if (points[i][0] > maxX) maxX = points[i][0];
        if (points[i][1] < minY) minY = points[i][1];
        if (points[i][1] > maxY) maxY = points[i][1];
    }

    double width = maxX - minX;
    double height = maxY - minY;
    double centerX = minX + width / 2;
    double centerY = minY + height / 2;

    return Rectangle2D(centerX, centerY, width, height);
}
```

### 3. Testing and Execution
**Test Case 1:**
Input 5 points: `1.0 2.5`, `3 4`, `5 6`, `7 8`, `9 10`
Output:
```
Enter five points: 1.0 2.5 3 4 5 6 7 8 9 10
The bounding rectangle's center (5, 6.25), width 8, height 7.5
```
