
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    bool check = a > b;
    std::cout << (check ? a : b);
}

