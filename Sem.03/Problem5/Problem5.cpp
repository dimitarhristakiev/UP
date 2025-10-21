
#include <iostream>

int main()
{
    
    int a, b;
    std::cin >> a >> b;

    int aliquot = 0;

    for (int i = 1;i <= a;i++) {
        for (int j = 1;j <= b;j++) {

            if ((a * i) == (b * j)) {
                aliquot = b * j;
                break;
            }
            else if ((a * j) == (b * i)) {
                aliquot = b * i;
                break;
            }
        }
        if (aliquot != 0)break;
    }
    std::cout << aliquot;
}
