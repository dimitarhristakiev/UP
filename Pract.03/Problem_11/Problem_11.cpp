
#include <iostream>

using namespace std;
int main()
{
	
	int n;
	cin >> n;

	int firstNum = 1;
	int secondNum = 1;
	
	cout << firstNum << " " << secondNum << " ";
	int sum = 0;
	while (true) {

		sum = firstNum + secondNum;

		if (sum > n)break;

		firstNum = secondNum;

		secondNum = sum;


		cout << sum << " ";

	}

}

