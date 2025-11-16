// Problem_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> nullArray(vector<int>arr, int size) {
    for (int i = 0;i < size;i++) {
        int num = arr[i];
        bool indexContained = false;
        while (num > 0) {
            if (num % 10 == i) {
                indexContained = true;
                break;
            }
            num /= 10;
        }
        if (!indexContained)arr[i] = 0;
    }
    return arr;
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
    vector<int> nullArr = nullArray(arr, size);
    for (int i = 0;i < size;i++) {
        std::cout << nullArr[i]<<" ";
    }
}

