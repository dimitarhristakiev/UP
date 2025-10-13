

#include <iostream>

int main()
{
    int grade;
    std::cin >> grade;
    bool check = (grade >= 2 && grade <= 6);
    std::cout << check;
}

