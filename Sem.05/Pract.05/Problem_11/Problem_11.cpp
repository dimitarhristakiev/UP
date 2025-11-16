
#include <iostream>
#include <vector>
using namespace std;

vector<int> unionArraySorted(vector<int>arr1, vector<int>arr2, vector<int>result) {
    for (int i = 0;i < arr1.size();i++) {
        result.push_back(arr1[i]);
    }
    for (int i = 0;i < arr2.size();i++) {
        result.push_back(arr2[i]);
    }
    for (int i = 0;i < result.size();i++) {
        for (int j = i + 1;j < result.size();j++) {
            if (result[i] == result[j])result.erase(result.begin() + j);
        }
        
        for (int j = i + 1;j < result.size();j++) {
            if (result[i] > result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
            }
        
    }
    return result;
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int>arr1;
    vector<int>arr2;

    int input;

    for (int i = 0;i < n;i++) {
        cin >> input;
        arr1.push_back(input);
    }
    for (int i = 0;i < m;i++) {
        cin >> input;
        arr2.push_back(input);
    }

    vector<int>unionArr = unionArraySorted(arr1, arr2, unionArr);
    cout << "Union: ";
    for (int i = 0;i < unionArr.size();i++) {
        cout << unionArr[i] << " ";
    }
}

