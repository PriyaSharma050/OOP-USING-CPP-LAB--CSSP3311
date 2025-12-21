/*7. File Copy Using get() and put() 
Write a program that reads characters from a text file using ifstream::get() and writes 
each character into another file using ofstream::put(). This should be done without using 
strings or getline(). Display appropriate messages when the file is opened and after 
copying is completed.*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string sourceFileName, destFileName;
    cout << "Enter the source file name: ";
    getline(cin, sourceFileName);
    cout << "Enter the destination file name: ";
    getline(cin, destFileName);

    ifstream sourceFile(sourceFileName, ios::binary);
    if (!sourceFile) {
        cerr << "Error: Could not open the source file " << sourceFileName << endl;
        return 1;
    }
    cout << "Source file opened successfully." << endl;

    ofstream destFile(destFileName, ios::binary);
    if (!destFile) {
        cerr << "Error: Could not open the destination file " << destFileName << endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) {
        destFile.put(ch);
    }

    cout << "Content copied successfully from " << sourceFileName << " to " << destFileName << endl;
    return 0;
}
