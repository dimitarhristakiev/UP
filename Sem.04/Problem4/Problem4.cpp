
#include <iostream>


void func(int n, int k) {
    int reverseN = 0;
    int reverseK = 0;
    bool isSuffix = false;
    while (k > 0) {
        reverseK = reverseK * 10 + k % 10;
        k /= 10;
    }
    while (n > 0) {
        reverseN = reverseN * 10 + n % 10;
        n /= 10;

        if (reverseK == reverseN) {
            isSuffix = true;
            break;
        
        }
    }
    std::cout << std::boolalpha << isSuffix;

    
}
int main()
{
    int n, k;
    std::cin >> n >> k;
    func(n, k);
}
