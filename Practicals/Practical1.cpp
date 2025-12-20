#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];   // Dynamic memory allocation

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);   // Pointer arithmetic
    }

    int* start = arr;
    int* end = arr + n - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    delete[] arr;
    return 0;
}

