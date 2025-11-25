/*Problem 4 — scaleArray (Function template) 
Objective: Implement scaleArray that multiplies every 
element by factor. Read array, scale, print result. 
Input: type n, then n elements, then factor.*/

#include <iostream>
using namespace std;

template <typename T>
void scaleArray(T arr[], int n, T factor) {
    for (int i = 0; i < n; i++)
        arr[i] *= factor;
}

int main() {
    string type;
    int n;
    cout << "Enter type (int, double) and number of elements: ";
    cin >> type >> n;

    if (type == "int") {
        int arr[n], factor;
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << "Enter factor: ";
        cin >> factor;
        scaleArray(arr, n, factor);
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
    } 
    else if (type == "double") {
        double arr[n], factor;
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << "Enter factor: ";
        cin >> factor;
        scaleArray(arr, n, factor);
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
    }
}
