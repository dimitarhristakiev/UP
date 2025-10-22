
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= n;j++) {
            for (int k = 1;k <= n;k++) {
                int a = pow(i, 2);
                int b = pow(j, 2);
                int c = pow(k, 2);
                if ((a + b) == c && a < b && b < c) {
                    cout << "Valid right triangle: " << i << " " << j << " " << k << "\n";
                }
            }
        }
    }
}

