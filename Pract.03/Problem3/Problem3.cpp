
#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin >> n;

    
    int sq = pow(n, 2);
    int rev = 0;
    while (sq > 0) {
        rev = rev * 10 + sq % 10;
        sq /= 10;
    }
    cout << rev;
}

