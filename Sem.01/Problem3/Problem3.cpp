

#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;

    bool check = (ch == 'A') || (ch == 'E') || (ch == 'O') || (ch == 'I') || (ch == 'U');

    std::cout << check;
}

