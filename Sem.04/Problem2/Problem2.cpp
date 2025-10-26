
#include <iostream>

void reverse(int n) {
    int reverse = 0;
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    std::cout << reverse;
}
int main()
{
    int n;
    std::cin >> n;
    reverse(n);
}

