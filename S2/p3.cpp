/*3. Sum of Even and Odd Elements 
Given an array of integers, write a program to find the sum of even elements and 
odd elements separately using pointer arithmetic.*/

#include <iostream>
using namespace std;

void sumEvenOdd(int *arr, int n, int &evenSum, int &oddSum) {
    int *ptr = arr;
    evenSum = 0;
    oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (*(ptr + i) % 2 == 0)
            evenSum += *(ptr + i);
        else
            oddSum += *(ptr + i);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " array eelements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenSum, oddSum;
    sumEvenOdd(arr, n, evenSum, oddSum);

    cout << "Sum of even elements: " << evenSum << "\n";
    cout << "Sum of odd elements: " << oddSum << "\n";

    return 0;
}
