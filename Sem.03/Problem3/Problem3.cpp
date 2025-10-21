
#include <iostream>


int main()
{

	int n;
	std::cin >> n;
	int c = n;

	int maxNum = 0;
	int maxCount = 0;



	
	for (int i = 0;i <= 9;i++) {
		n = c;
		int count = 0;

		while (n > 0) {
			int rem = n % 10;
			if (rem == i) {
				count++;
			}
			n = n / 10;
		}

		if (count > maxCount) {
			maxCount = count;
			maxNum = i;
		}
	}
		
	

	std::cout << maxNum;
}

