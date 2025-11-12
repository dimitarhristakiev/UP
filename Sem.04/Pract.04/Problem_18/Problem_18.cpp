
#include <iostream>
using namespace std;

int validateNumber() {
	int num;
	bool validNum = false;
	while (validNum==false) {
		cout << "Enter a number between 100 and 100000"<<endl;
		cin >> num;
		if (num >= 100 && num <= 100000) {
			return num;
		}
	}

}

int closestPower(int num) {
	int closestPower = log2(num);

	int lowerPower = pow(2, closestPower);
	int higherPower = pow(2, closestPower + 1);

	if (abs(num - lowerPower) <= abs(num - higherPower))return lowerPower;
	else return higherPower;
}


int main() {
	int a = validateNumber();
	cout << "Closest power of 2: "<<closestPower(a) << endl;

}
