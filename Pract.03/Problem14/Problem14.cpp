
#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int i = 0;
	bool isPower = false;

	while (true) {

		if (pow(2, i) > a) break;

		if (pow(2, i) == a) {
			isPower = true;
			break;
		}

		i++;
	}
	cout << boolalpha << isPower;
}

