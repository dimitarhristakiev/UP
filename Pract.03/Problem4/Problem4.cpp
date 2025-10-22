
#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int factoriel = 1;
	for (int i = 1;i <= n;i++) {
		factoriel *= i;
	}

	cout << factoriel;
}

