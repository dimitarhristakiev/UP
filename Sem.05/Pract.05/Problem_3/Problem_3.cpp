
#include <iostream>
#include <vector>
using namespace std;

bool removeTargetAtIndex(vector<int> arr, int size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index;i < size - 1;i++) {
            arr[i] = arr[i + 1];
        }
        return true;
    }
    else return false;
}

void printArrayWithout(vector<int>arr, int size) {
    for (int i = 0;i < size-1;i++) {
        std::cout << arr[i] << " ";
    }
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
    int index;
    cin >> index;
    if (removeTargetAtIndex(arr, size, index)) {
        printArrayWithout(arr, size);
    }
    else std::cout << "Enter a valid index! (Between 0 and 7)";
}

