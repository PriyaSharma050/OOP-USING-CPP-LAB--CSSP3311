/*2. Count Characters, Words, and Lines 
Create a C++ program that reads a text file and counts the total number of characters, 
words, and lines present in it. Use file-handling functions and string processing 
techniques. Display all three counts separately at the end.*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    getline(cin, filename);

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Could not open the file " << filename << endl;
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    string line;

    while (getline(inputFile, line)) {
        lineCount++;
        charCount += line.length();

        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    inputFile.close();

    cout << "Total Characters: " << charCount << endl;
    cout << "Total Words: " << wordCount << endl;
    cout << "Total Lines: " << lineCount << endl;

    return 0;
}