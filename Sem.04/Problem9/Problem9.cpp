
#include <iostream>

void onSameCircle(double a, double b, double c, double d) {
    double r1 = pow(a, 2) + pow(b, 2);
    double r2 = pow(c, 2) + pow(d, 2);
    bool onSame = false;
    if (r1 == r2) {
        onSame = true;
    }
    std::cout << std::boolalpha << onSame;
}
int main()
{
    double a, b, c, d;
    std::cin >> a >> b >> c >> d;
    onSameCircle(a, b, c, d);
}
