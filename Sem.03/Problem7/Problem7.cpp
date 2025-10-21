
#include <iostream>

int main()
{

	int n;
	std::cin >> n;
	int i = n;
	do {
		bool isPrime = false;
		if (n % i == 0) {
			isPrime = true;
			for (int j = 2;j <= i;j++) {
				if (i % j == 0 && i != j) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				n = n / i;
				std::cout << i << "\n";
				i = n;
			}
			
		}
		if (isPrime)i++;
		i--;
	} while (i >= 2);
}


