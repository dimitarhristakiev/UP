
#include <iostream>
#include <vector>
using namespace std;

void minAndMax(vector<int>arr, int size) {
	int min = arr[0];
	int max = arr[0];
	for (int i = 0;i < size;i++) {
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	std::cout << "Min: " << min << std::endl << "Max: " << max;
}
int main()
{
	int size;
	cin >> size;

	vector<int>arr;

	int input;
	for (int i = 0;i < size;i++) {
		cin >> input;
		arr.push_back(input);
	}
	minAndMax(arr, size);
}

