
#include <iostream>

int NOD(int& a, int& b, int& c, int& d) {
    if (a == 1 || b == 1 || c == 1 || d == 1)return 1;
    int i = 2;
    int max = 0;
    int maxNod = 0;
    if (a > b && a > c && a > d)max = a;
    else if (b > a && b > c && b > d)max = b;
    else if (c > a && c > b && c > d)max = c;
    else max = d;
    while (i<=max) {
        int nod = 1;
        if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0) {
            nod = i;
        }
        if (nod > maxNod)maxNod = nod;
        
        i++;
    }
    return maxNod;
}
int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    if (a > 0 && b > 0 && c > 0 && d > 0)
        std::cout << "NOD = " << NOD(a, b, c, d);
    else std::cout << "All numbers must be natural.";
}

