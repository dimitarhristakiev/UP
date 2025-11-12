
#include <iostream>

int calculate(int a, int b, char action) {
    int result = 0;
    switch (action) {
    case '+':result = a + b;
        break;
    case '-':result = a - b;
        break;
    case '*':result = a * b;
        break;
    case '/':result = a / b;
        break;
    case '%':result = a % b;
        break;
    default:result = a + b;
        break;
    }
    return result;
}
int main()
{
    int a, b;
    char action;
    std::cin >> a >> b >> action;
    std::cout << calculate(a, b, action);
}

