/*6. Word Search Inside a Text File
Create a C++ program that asks the user for a word and a filename, and then searches the 
file to count how many times the given word appears. Make sure the search is case
insensitive and correctly handles punctuation. Display the number of occurrences at the 
end. */

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
string toLowerCase(const string& str) {
    string lowerStr;
    for (char ch : str) {
        lowerStr += tolower(ch);
    }
    return lowerStr;
}
string removePunctuation(const string& str) {
    string cleanStr;
    for (char ch : str) {
        if (!ispunct(ch)) {
            cleanStr += ch;
        }
    }
    return cleanStr;
}

int main() {
    string filename, searchWord;
    cout << "Enter the filename: ";
    getline(cin, filename);
    cout << "Enter the word to search: ";
    getline(cin, searchWord);

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Could not open the file " << filename << endl;
        return 1;
    }

    int count = 0;
    string word;
    string lowerSearchWord = toLowerCase(removePunctuation(searchWord));

    while (inputFile >> word) {
        string cleanWord = toLowerCase(removePunctuation(word));
        if (cleanWord == lowerSearchWord) {
            count++;
        }
    }

    inputFile.close();

    cout << "The word \"" << searchWord << "\" appears " << count << " times in the file." << endl;

    return 0;
}
