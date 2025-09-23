/*10.Pointer to Array of Pointers 
Create an array of string pointers (e.g., names of 5 students) and print them using 
pointer notation.*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i); 
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i); 
    }

    double avg = (double)sum / n;

    cout << "Average of elements: " << avg << "\n";

    delete[] arr;

    return 0;
}
