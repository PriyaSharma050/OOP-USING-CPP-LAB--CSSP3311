/*Problem 2 — sumArray (Function template) 
Objective: Implement sumArray as a function template that returns sum of n elements 
of a array. Types allowed: int or double. 
Input: First line: type and n. Second line: n numbers. 
Output: Sum (same type as input).*/

#include <iostream>
using namespace std;

template <typename T>
T sumArray(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    string type;
    int n;
    cout<<"Enter type and number of elements: ";
    cin >> type >> n;

    if (type == "int") {
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << sumArray(arr, n);
    } 
    else if (type == "double") {
        double arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << sumArray(arr, n);
    }
}

