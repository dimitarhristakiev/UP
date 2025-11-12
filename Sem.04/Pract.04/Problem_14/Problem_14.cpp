

#include <iostream>


int askUser(int& from, int& to) {
    std::cout << "Enter a number in the interval"<<std::endl;
    int n = 0;
    std::cin >> n;
    while (n<from || n>to) {
        std::cout << "Try again:"<<std::endl;
        std::cin >> n;
    }
    return n;
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "The number " << askUser(a, b) << " is in the interval [" << a << "," << b << "] ";
}


