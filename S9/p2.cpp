/*2. Vector – Remove All Occurrences 
Given a vector of N elements and an integer X, remove all occurrences of X using STL 
functions (e.g., erase-remove idiom). 
Print the updated vector.*/

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> v(N);
    cout << "Enter " << N << " integers: ";
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int X;
    cout << "Enter the integer to remove: ";
    cin >> X;

    v.erase(remove(v.begin(), v.end(), X), v.end());

    cout << "Updated vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
