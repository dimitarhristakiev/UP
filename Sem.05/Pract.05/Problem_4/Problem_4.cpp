
#include <iostream>
#include <vector>
using namespace std;

int count = 0;
vector<int> inInterval(vector<int>arr, vector<int> result,int a,int b, int size) {
    for (int i = 0;i < size;i++) {
        if (arr[i] >= a && arr[i] <= b) {
            result.push_back(arr[i]);
        }
    }

    return result;
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
    vector<int>result;
    int a, b;
    std::cin >> a >> b;
    result = inInterval(arr, result, a, b, size);
    for (int a : result) {
        cout << a << " ";
    }
}

