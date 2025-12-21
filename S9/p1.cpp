/*1. Vector Basics – Insert & Print 
Given an integer N, followed by N integers, store them in a vector. 
Then insert a new integer X at position P (0-indexed). 
Print the final vector. 
Input: 
N   
a1 a2 … aN   
X P 
Output: Final vector elements.*/

#include <iostream>
#include <vector>
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

    int X, P;
    cout << "Enter the integer to insert and the position: ";
    cin >> X >> P;

    if (P < 0 || P > v.size()) {
        cerr << "Error: Invalid position." << endl;
        return 1;
    }

    v.insert(v.begin() + P, X);

    cout << "Final vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
