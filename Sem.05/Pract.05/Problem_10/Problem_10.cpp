// Problem_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> intersectionArray(vector<int>arr1, vector<int>arr2, vector<int>result) {
    for (int i = 0;i < arr1.size(); i++) {
        for (int j = 0;j < arr2.size();j++) {
            if (arr1[i] == arr2[j])result.push_back(arr1[i]);
        }
    }
    return result;
}

vector<int>unionArray (vector<int>arr1, vector<int>arr2, vector<int>result) {
    for (int i = 0;i < arr1.size();i++) {
        result.push_back(arr1[i]);
    }
    for (int i = 0;i < arr2.size();i++) {
        result.push_back(arr2[i]);
    }
    for (int i = 0;i < result.size();i++) {
        for (int j = i + 1;j < result.size();j++) {
            if (result[i] == result[j])result.erase(result.begin()+j);
        }
    }
    return result;
}

int main()
{
    int n,m;
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

    vector<int>intersection = intersectionArray(arr1, arr2, intersection);

    cout << "Intersection: ";
    for (int i = 0;i < intersection.size();i++) {
        cout << intersection[i] << " ";
    }
    vector<int>unionArr = unionArray(arr1, arr2, unionArr);
    cout << "Union: ";
    for (int i = 0;i < unionArr.size();i++) {
        cout << unionArr[i] << " ";
    }
}

