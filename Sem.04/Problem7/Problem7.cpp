
#include <iostream>

void power(int n, int k) {
	int a = n;
	int b = k;
	int org = a;
	while (b > 1) {
		a *= org;
		b--;
	}
	std::cout << a;
}
int main()
{
	int n, k;
	std::cin >> n >> k;
	power(n, k);
}
