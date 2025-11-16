
#include <iostream>


int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)return mid;
        else if (arr[mid] < target)low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main()
{
    const int size = 5;
    int arr[size] = { 1,21,37,49,61 };
    int target;
    std::cin >> target;
    int result = binarySearch(arr, size, target);
    if (result != -1)std::cout << "Target " << target << " has been reached at index " << result;
    else std::cout << "Target " << target << " has not been found.";
}

