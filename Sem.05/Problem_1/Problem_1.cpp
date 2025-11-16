
#include <iostream>


void printArray(int arr[], int length) {
    for (int i = 0;i < length;i++) {
        std::cout << arr[i]<< std :: endl;
    }
}
int main()
{
    const int len = 4;
    int arr[len] = { 4,3,53,2 };
    printArray(arr, len);
}
