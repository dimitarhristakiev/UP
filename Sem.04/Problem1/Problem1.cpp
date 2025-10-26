
#include <iostream>

void primeNumbers(int n) {
        
    for (int k = 1;k <= n;k++) {
        bool isPrimeFirst = true;
        bool isPrimeSecond = true;
        int firstNumber = 6 * k - 1;
        int secondNumber = 6 * k + 1;
        for (int i = 2;i < firstNumber;i++) {
            if (firstNumber % i == 0) {
                isPrimeFirst = false;
                break;
            }
        }
        for (int i = 2;i < secondNumber;i++) {
            if (secondNumber % i == 0) {
                isPrimeSecond = false;
                break;
            }
        }
        if (isPrimeFirst&&isPrimeSecond)std::cout<<"Pair of the two prime numbers: (" << firstNumber << "," << secondNumber << ")\n" ;
    }
}

int main()
{
    int n;
    std::cin >> n;
    if (n >= 0) {
        primeNumbers(n);
    }
    else std::cout << "Enter a positive number!";
}

