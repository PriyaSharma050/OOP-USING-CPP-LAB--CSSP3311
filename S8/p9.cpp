/*9. File Existence Check and Auto-Creation 
Write a C++ program that asks the user for a filename and checks whether the file exists. 
• If the file exists, display "File already exists." 
• If the file does not exist, create a new file with the given name and write the text: 
"This file was automatically created because it did not exist."*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name: ";
    getline(cin, fileName);

    ifstream inFile(fileName);
    if (inFile) {
        cout << "File already exists." << endl;
        inFile.close();
    } else {
        ofstream outFile(fileName);
        if (!outFile) {
            cerr << "Error: Could not create the file " << fileName << endl;
            return 1;
        }
        outFile << "This file was automatically created because it did not exist." << endl;
        outFile.close();
        cout << "File did not exist, so a new file was created: " << fileName << endl;
    }

    return 0;
}
