
#include <iostream>
#include <vector>
using namespace std;

int largestDescending(vector<int> arr, int size) {
    int maxCount = 1;
    for (int i = 0;i < size;i++) {
        bool larger = false;
        for (int j = i + 1;j < size;j++) {
            if (arr[i] > arr[j]) {
                larger = true;
                break;
            }
        }
        if (larger) {
            maxCount++;
        }

        
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
    std::cout << largestDescending(arr, size);
}

