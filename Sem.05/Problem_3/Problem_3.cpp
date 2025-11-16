
#include <iostream>

int* reverseArray(int arr[], int len) {
    for (int i = 0;i < len/2;i++) {
        if (arr[i] != arr[len - 1 - i]) {
            int temp = arr[i];
            arr[i] = arr[len - 1 - i];
            arr[len - 1 - i] = temp;
        }
    }
    return arr;
}
int main()
{
    const int size = 5;
    int arr[size] = { 4,3,22,2,1 };
    int* revArr = reverseArray(arr, size);
    for (int i = 0;i < size;i++) {
        std::cout << revArr[i]<<" ";
    }
}

