
#include <iostream>
#include <vector>
using namespace std;

int largestSame(vector<int>arr, int size) {
    int maxCount = 1;
    for (int i = 0;i < size;i++) {
        int count = 1;
        for (int j = i + 1;j < size;j++) {
            if (arr[i] == arr[j])count++;
            else break;
        }
        if (count > maxCount)maxCount = count;
    }
    return maxCount;
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
    std::cout << largestSame(arr, size);
}

