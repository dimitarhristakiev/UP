
#include <iostream>


int linearSearch(int arr[], int len, int elt) {
	for (int i = 0;i < len;i++) {
		if (arr[i] == elt) {
			return i;
		}
	}
	return -1;
}
int main()
{
	const int size = 7;
	int arr[size] = { 3,45,782,32,12,5,2 };
	int target;
	std::cin >> target;
	if (linearSearch(arr, size, target) != -1)std::cout << "Element " << target << " found at index " << linearSearch(arr, size, target);
	else std::cout << "Element "<< target <<"was not found in array";
}
