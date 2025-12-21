/*8. File Encryption Program 
Design a program that reads a text file and creates an encrypted version of it in another 
file. 
Encryption Rule: Shift each character by +2 ASCII positions. 
For example: 
• 'A' → 'C' 
• 'x' → 'z' 
• '9' → ';' 
The program should read each character, apply the transformation, and write the 
encrypted text to a new file. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string sourceFileName, destFileName;

    cout << "Enter the source file name: ";
    getline(cin, sourceFileName);
    cout << "Enter the destination (encrypted) file name: ";
    getline(cin, destFileName);

    // Open source file
    ifstream sourceFile(sourceFileName, ios::binary);
    if (!sourceFile) {
        cerr << "Error: Could not open source file " << sourceFileName << endl;
        return 1;
    }
    cout << "Source file opened successfully." << endl;

    // Open destination file
    ofstream destFile(destFileName, ios::binary);
    if (!destFile) {
        cerr << "Error: Could not open destination file " << destFileName << endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) {
        ch = ch + 2;  // Shift ASCII by +2
        destFile.put(ch);
    }

    sourceFile.close();
    destFile.close();

    cout << "File encrypted successfully. Encrypted file: " << destFileName << endl;
    return 0;
}
