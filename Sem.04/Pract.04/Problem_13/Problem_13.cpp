
#include <iostream>

int concat(int& a, int& b) {
    int reversedN = 0;
    int concat = 0;
    while (b > 0) {
        reversedN = reversedN * 10 + b % 10;
        b /= 10;
    }
    while (a > 0) {
        reversedN = reversedN * 10 + a % 10;
        a /= 10;
    }

    while (reversedN > 0) {
        concat = concat * 10 + reversedN % 10;
        reversedN /= 10;
    }
    return concat;
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout<<concat(a, b);
}

