// Problem_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
using namespace std;

void average(vector<int>arr, int size) {
    int sum = 0;
    for (int i = 0;i < size;i++) {
        sum += arr[i];
    }
    double avg = (double)sum / size;

    int minDiff = abs(avg-arr[0]);
    int result = 0;
    for (int i = 0;i < size;i++) {
        int diff = abs(avg-arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            result = arr[i];
        }
    }
    std::cout << avg << std::endl << result;
    
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

    average(arr, size);
}
