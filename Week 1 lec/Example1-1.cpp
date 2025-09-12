#include <stdio.h>
#include <iostream>
int main( )
{

    enum color { red, green, blue } c;
    c = blue;
    std::cout << "c = " << c << std::endl;
    return 0;
}