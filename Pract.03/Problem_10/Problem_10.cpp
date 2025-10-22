
#include <iostream>


using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = m;i <= n;i++) {
        int sum = 0;
        for (int j = 1;j < i;j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i)cout << i << "\n";
    }
}

