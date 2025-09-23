/* 1. Find Maximum and Minimum 
Write a program to input n integers in an array and find the maximum and 
minimum element using a function that takes an array pointer as a parameter. */

#include <iostream>
using namespace std;

int maximum(int *arr, int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int minimum(int *arr, int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int n;
    cout<< "Enter the number of elements: ";
    cin>> n;

    int arr[n];
    cout << "Enter " << n << " array eelements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum: "<< maximum(arr, n) << "\n";
    cout << "Minimum: " << minimum(arr, n) << "\n";

    return 0;
}
