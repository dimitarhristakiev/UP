
#include <iostream>

int main()
{
    int a = 10;
    int b = 43;
    
    int c = a;
    a = b;
    b = c;

    std::cout << a << b;

}

