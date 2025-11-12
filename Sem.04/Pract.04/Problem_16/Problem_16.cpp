
#include <iostream>

int pow(int num, unsigned n) {
	int res = 1;
	for (int i = 0;i < n;i++) {
		res *= num;
	 }
	return res;
}
int main()
{
	int num, n;
	std::cin >> num >> n;
	std::cout << pow(num, n);
}

