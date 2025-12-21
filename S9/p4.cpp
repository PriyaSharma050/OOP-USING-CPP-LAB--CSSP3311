/*4. Unique Elements Using Set 
Given N integers, insert them into a set and print them in sorted order. 
Then check if an integer X exists in the set and print "YES" or "NO".*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of integers: ";
    cin >> N;

    set<int> s;
    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        s.insert(num);  
    }

    cout << "Unique elements in sorted order: ";
    for (int num : s) {
        cout << num << " ";
    }
    cout << endl;

    int X;
    cout << "Enter the integer to check: ";
    cin >> X;

    if (s.find(X) != s.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
