
#include <iostream>
using namespace std;

bool checkPrime(int num) {
    bool check = true;
    for (int i = 2;i < num;i++) {
        if (num % i == 0) {
            check = false;
            break;
        }
    }
    return check;
}

void factorNumber(int num) {
    if (checkPrime(num)||num==1)cout << num << " is a prime number -> " << num << "." << 1;
    else {
        while (num > 0) {
            for (int i = 2;i <= num;i++) {
                if (num % i == 0) {
                    if (checkPrime(i) && i != num)cout << i << ".";
                    else if (checkPrime(i))cout << i;
                    num /= i;
                    break;
                }
            }
        }
    }
}
int main()
{
    int num;
    cin >> num;
    if (num > 0)
        factorNumber(num);
    else cout << "You must enter a natural number!";
}

