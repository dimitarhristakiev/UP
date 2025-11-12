
#include <iostream>
using namespace std;

int calculateSum(long long num) {
	int finalSum = 0;
	while (true) {
		int sum = 0;
		while (num > 0) {
			int digit = num % 10;
			num /= 10;
			sum += digit;
		}
		if (sum > 9) {
			num = sum;
		}
		else {
			finalSum = sum;
			break;
		}
	}
	return finalSum;

}
int main()
{
	long long n;
	cin >> n;
	cout << calculateSum(n);
}

