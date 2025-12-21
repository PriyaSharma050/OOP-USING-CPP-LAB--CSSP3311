/*7. First Non-Repeating Element Using Map 
Given N integers, find the first element that appears exactly once using an 
unordered_map. 
If none exists, print -1.*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of integers: ";
    cin >> N;

    vector<int> nums(N);
    unordered_map<int, int> freq;

    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        freq[nums[i]]++;  
    }

    int firstNonRepeating = -1;
    for (int num : nums) {
        if (freq[num] == 1) {
            firstNonRepeating = num;
            break;
        }
    }

    cout << "First non-repeating element: " << firstNonRepeating << endl;

    return 0;
}
