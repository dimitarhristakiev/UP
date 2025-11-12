
#include <iostream>

int NOK(int& a, int& b, int& c) {
	int i = 1;
	int nok = 0;
	while (true) {
		if (i % a == 0 && i % b == 0 && i % c == 0) {
			nok = i;
			break;
		}
		i++;
	}
	return nok;
}
int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	std::cout<<"NOK = "<<NOK(a, b, c);
}
