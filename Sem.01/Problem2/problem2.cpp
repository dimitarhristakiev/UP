#include <iostream>;


int main() {
	int n;
	std::cin >> n;

	int firstDigit = n / 100;
	int secondDigit = (n / 10) % 10;
	int thirdDigit = n % 10;

	int newNumber = thirdDigit * 100 + secondDigit * 10 + firstDigit + 1;

	std::cout << newNumber;

}