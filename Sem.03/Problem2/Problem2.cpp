
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int result=0;

	while (n > 0) {
		
		result = result * 10 + n % 10;
		n /= 10;

	}

	std::cout << result+1;
}
