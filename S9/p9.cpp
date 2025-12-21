/*9. Priority Queue – K Largest Elements 
Given a vector of N integers and an integer K, print the K largest elements using a 
priority_queue. */

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> nums(N);
    cout << "Enter " << N << " integers:\n";
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    cout << "Enter K: ";
    cin >> K;
    if (K <= 0 || K > N) {
        cerr << "Invalid value of K." << endl;
        return 1;
    }

    priority_queue<int> pq(nums.begin(), nums.end());

    cout << "The " << K << " largest elements are: ";
    for (int i = 0; i < K; i++) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
