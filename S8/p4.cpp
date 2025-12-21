/*4. Append User Input to Existing File 
Develop a program that opens an existing text file in append mode (ios::app). Ask the 
user to enter multiple lines of text until they enter "STOP". Append each line to the file 
without overwriting the existing data. After completion, display a message indicating that 
the data has been appended successfully.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string filename;
    cout << "Enter the name of the text file to append data: ";
    getline(cin, filename);

    ofstream outputFile(filename, ios::app);
    if (!outputFile) {
        cerr << "Error: Could not open the file " << filename << " in append mode." << endl;
        return 1;
    }

    cout << "Enter text to append to the file (type 'STOP' to finish):" << endl;
    string line;
    while (true) {
        getline(cin, line);
        if (line == "STOP") {
            break;
        }
        outputFile << line << endl;
    }

    outputFile.close();
    cout << "Data appended successfully to " << filename << endl;
    return 0;
}