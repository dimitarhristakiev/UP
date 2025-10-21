
#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	int biggestDivisor = 0;
	for (int i = 1;i <= a;i++) {

		for (int j = 1;j <= b;j++) {

			if (b % j == 0 && a % j == 0) {
				biggestDivisor = j;
			}
		}
	}
	std::cout << biggestDivisor;
}

