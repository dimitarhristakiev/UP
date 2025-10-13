#include <iostream>;


int main() {
	int n;
	std::cin >> n;

	int firstDigit = n % 100;
	int secondDigit = (n / 10) % 10;
	int thirdDigit = n / 100;

	int newNumber = thirdDigit * 100 + secondDigit * 10 + thirdDigit + 1;

	std::cout << newNumber;


}