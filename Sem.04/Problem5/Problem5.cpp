
#include <iostream>

void func(int n, int k) {
	int reverseN = 0;
	int reverseK = 0;
	bool isPrefix = false;

	while (n > 0) {
		reverseN = reverseN * 10 + n % 10;
		n /= 10;
	}
	while (reverseN > 0) {
		reverseK = reverseK * 10 + reverseN % 10;
		reverseN /= 10;
		if (reverseK == k) {
			isPrefix = true;
			break;
		}
	}
	std::cout << std::boolalpha << isPrefix;
}
int main()
{
	int n, k;
	std::cin >> n >> k;
	func(n, k);
}

