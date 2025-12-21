/*3. Vector of Pairs – Sort by Second Value 
You are given N pairs (a, b). 
Sort the vector of pairs in ascending order of b, and if ties occur, sort by a.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of pairs: ";
    cin >> N;

    vector<pair<int, int>> v(N);
    cout << "Enter " << N << " pairs (a b):\n";
    for (int i = 0; i < N; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), [](const pair<int,int>& p1, const pair<int,int>& p2) {
        if (p1.second == p2.second)
            return p1.first < p2.first; 
        return p1.second < p2.second;   
    });

    cout << "Sorted pairs:\n";
    for (const auto &p : v) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
