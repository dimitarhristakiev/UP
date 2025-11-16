

#include <iostream>
#include <vector>
using namespace std;
int mostCommon(vector<int>arr, int size) {
    int maxCount = 1;
    int mostCommonNum = 0;
    for (int i = 0;i < size;i++) {
        int count = 1;
        for (int j = i + 1;j < size;j++) {
            if (arr[i] == arr[j])count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mostCommonNum = arr[i];
        }
    }
    return mostCommonNum;
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
    std::cout << mostCommon(arr, size);
}

