
#include <iostream>
using namespace std;
int main()
{
	
	int n,numsToSum,sum=0,actualSum=0;
	cin >> n;


	for (int i = 1;i <= n - 1;i++) {
		cin >> numsToSum;
		sum += numsToSum;

	}

	for (int i = 1;i <= n;i++) {
		actualSum += i;
	}

	cout << "Missing number is: " << (actualSum - sum);
	
}

