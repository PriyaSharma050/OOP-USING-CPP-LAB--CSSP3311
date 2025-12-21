/*3. Copy Content From One File to Another 
Write a C++ program that asks the user to input the source file name and the destination 
file name. Open the source file in reading mode and the destination file in writing mode. 
Copy the entire content from the source file to the destination file character by character 
or line by line. Also display a message confirming that the copy operation was successful. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string sourceFileName, destFileName;
    cout << "Enter the source file name: ";
    getline(cin, sourceFileName);
    cout << "Enter the destination file name: ";
    getline(cin, destFileName);

    ifstream sourceFile(sourceFileName);
    if (!sourceFile) {
        cerr << "Error: Could not open the source file " << sourceFileName << endl;
        return 1;
    }

    ofstream destFile(destFileName);
    if (!destFile) {
        cerr << "Error: Could not open the destination file " << destFileName << endl;
        sourceFile.close();
        return 1;
    }

    string line;
    while (getline(sourceFile, line)) {
        destFile << line << endl;
    }

    sourceFile.close();
    destFile.close();

    cout << "Content copied successfully from " << sourceFileName << " to " << destFileName << endl;
    return 0;
}