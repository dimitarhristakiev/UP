
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    bool prime = true;

    for (int i = 2;i < n;i++) {

        if (n % i == 0) {
            prime = false;
            break;
        }
    }

    std::cout << (prime ? "prime" : "not prime");
}

