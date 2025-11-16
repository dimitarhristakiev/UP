

#include <iostream>
int* sortedArray(int arr[], int size) {
    for (int i = 0;i < size;i++) {
        for (int j = i + 1;j < size;j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}
int main()
{
    const int size = 5;
    int arr[size] = { 123,17,3,7,2 };
    int* sortedArr = sortedArray(arr, size);
    for (int i = 0;i < size;i++) {
        std::cout << sortedArr[i]<<" ";
    }
}

