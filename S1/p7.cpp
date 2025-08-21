/*7. Reverse an Array (Pointer Parameter) 
Write a function void reverse(int *arr, int n) that reverses the elements of an array in place 
using pointers. */
#include <iostream>
using namespace std;

void reverse(int *arr, int n) {
    int *baseValue = arr;
    int *endValue = arr + n - 1;

    while (baseValue < endValue) {
        int temp = *baseValue;
        *baseValue = *endValue;
        *endValue = temp;

        baseValue++;
        endValue--;
    }
}

int main() {
    int arr[] = {3, 4, 5, 6, 7};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++) {
        cout << arr[i] << "\n";
    }
}
