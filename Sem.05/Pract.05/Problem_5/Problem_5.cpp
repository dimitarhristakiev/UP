
#include <iostream>
#include <vector>
using namespace std;

bool isSymmetrical(vector<int>arr,int size) {
	bool symmetry = true;
	vector<int>revArr;
	for (int i = size - 1; i >= 0; i--) {
		revArr.push_back(arr[i]);
	}
	for (int i = 0;i < size;i++) {
		if (revArr[i] != arr[i]) {
			symmetry = false;
			break;
		}
	}
	return symmetry;
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
	if (isSymmetrical(arr,size))cout << "yes";
	else cout << "no";
}
