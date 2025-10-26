
#include <iostream>

void log(double n, double k) {
    double a = n;
    double b = k;
    int l = log(a) / log(b);
    std::cout << l;
}
    
int main()
{
    double n, k;
    std::cin >> n >> k;
    log(n, k);
}
