/*6. Counting Word Frequency
Given N strings, count the frequency of each using map<string, int>. 
Print the words in lexicographical order with their frequencies.*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of words: ";
    cin >> N;

    map<string, int> wordCount;
    cout << "Enter " << N << " words:\n";
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        wordCount[word]++;  
    }

    cout << "Word frequencies:\n";
    for (const auto &entry : wordCount) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
