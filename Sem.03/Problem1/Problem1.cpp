
#include <iostream>

int main()
{
	int n;
	int sum = 0;
	do {

		std::cin >> n;
		sum += n;
	} while (n != 0);

	std::cout << sum;
}

