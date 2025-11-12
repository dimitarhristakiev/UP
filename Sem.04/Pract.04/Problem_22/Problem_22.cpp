
#include <iostream>
using namespace std;

void printNumberOfTimes(int num,int times) {
	for (int i = 0;i < times;i++) {
		cout << num;
	}
}
void sortedNumber(int num) {
	int ones = 0;
	int twos = 0;
	int threes = 0;
	int fours = 0;
	int fives = 0;
	int sixes = 0;
	int sevens = 0;
	int eights = 0;
	int nines = 0;
	while (num > 0) {
		switch (num%10) {
		case 1:ones++;
			break;
		case 2:twos++;
			break;
		case 3:threes++;
			break;
		case 4:fours++;
			break;
		case 5:fives++;
			break;
		case 6:sixes++;
			break;
		case 7:sevens++;
			break;
		case 8:eights++;
			break;
		case 9:nines++;
			break;
		}
		num /= 10;
	}
	printNumberOfTimes(1, ones);
	printNumberOfTimes(2, twos);
	printNumberOfTimes(3, threes);
	printNumberOfTimes(4, fours);
	printNumberOfTimes(5, fives);
	printNumberOfTimes(6, sixes);
	printNumberOfTimes(7, sevens);
	printNumberOfTimes(8, eights);
	printNumberOfTimes(9, nines);
}

int main()
{
	int num;
	cin >> num;
	sortedNumber(num);
}
