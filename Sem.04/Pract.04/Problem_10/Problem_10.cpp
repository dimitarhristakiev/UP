
#include <iostream>

void canSquare(int& num) {

    if (pow(sqrt(num), 2) == num)std::cout << num << " - yes (" << sqrt(num)<<"^2)";
    else std::cout << num << " - no (" << "?^2)";
}
int main()
{
    int n;
    std::cin >> n;
    canSquare(n);
}

