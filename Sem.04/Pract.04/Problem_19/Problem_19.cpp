
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

void allPrimeNumbers(int num) {
    for (int i = 2;i <= num;i++) {
        bool check = checkPrime(i);
        if (check)cout << i <<" ";
    }
    cout << endl;
}

bool sumOfTwoPrimes(int num) {
    for (int i = 2;i <= num;i++) {
        bool checkFirst = checkPrime(i);
        if (checkFirst) {
            for (int j = 2;j <= num;j++) {
                int sum = 0;
                bool checkSecond = checkPrime(j);
                if (checkSecond) {
                    sum = i + j;
                    if (sum == num) {
                        cout << num << " is a sum of two prime numbers: " << i << " + " << j;
                        return true;
                    }
                }
            }
        }
    }
    cout << num << " is NOT a sum of two prime numbers.";
    return false;
}
int main()
{
    int n = 0;
    cin >> n;
    checkPrime(n) ? cout<<n<< " is a prime number."<< endl : cout<<n<<" is NOT a prime number."<< endl;
    allPrimeNumbers(n);
    sumOfTwoPrimes(n);
}

