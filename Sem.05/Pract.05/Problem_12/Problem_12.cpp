
#include <iostream>
#include <vector>
using namespace std;

bool linearlyDependant(vector<int>arr1, vector<int>arr2) {
    int count = 0;
    for (int i = 0;i < arr1.size();i++) {
        if (arr1[i] > arr2[i] && arr1[i] % arr2[i] == 0)count++;
        else if (arr2[i] > arr1[i] && arr2[i] % arr1[i] == 0)count++;
    }
    if (count == arr1.size())return true;
    else return false;
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

    if (linearlyDependant(arr1, arr2))cout << "yes";
    else cout << "no";
}

