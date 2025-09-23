/*2. Reverse an Array 
Write a program to reverse an array of size n using pointers (do not use indexing 
like arr[i]). */

#include <iostream>
using namespace std;

void reverseArray(int *start, int n) {           
    int *end = start + n - 1;  

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

void display(int *ptr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << "\n";
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

    cout << "Original Array: ";
    display(arr, n);

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    display(arr, n);

    return 0;
}
