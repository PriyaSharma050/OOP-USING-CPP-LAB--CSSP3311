/*5. Multiset – Frequency Tracking 
Insert N integers into a multiset. 
Then delete one occurrence of an integer X if it exists. 
Print all remaining elements.*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of integers: ";
    cin >> N;

    multiset<int> ms;
    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        ms.insert(num); 
    }

    int X;
    cout << "Enter the integer to remove one occurrence: ";
    cin >> X;

    auto it = ms.find(X);
    if (it != ms.end()) {
        ms.erase(it);  
        cout << "One occurrence of " << X << " removed." << endl;
    } else {
        cout << X << " not found in the multiset." << endl;
    }

    cout << "Remaining elements: ";
    for (int num : ms) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
