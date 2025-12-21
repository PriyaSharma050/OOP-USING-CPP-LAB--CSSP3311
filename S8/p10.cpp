/*10. Reading Numbers and Finding Statistics 
Develop a program that reads a list of integers stored in a file (one integer per line). After 
reading all integers, the program should compute and display the following: 
• Sum of all numbers 
• Maximum number 
• Minimum number 
• Total count of numbers 
The program must handle invalid file formats gracefully.*/

#include <iostream>
#include <fstream>
#include <string>
#include <limits> 
using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name containing integers: ";
    getline(cin, fileName);

    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error: Could not open the file " << fileName << endl;
        return 1;
    }
    cout << "File opened successfully." << endl;

    int number;
    long long sum = 0; 
    int maxNum = numeric_limits<int>::min();
    int minNum = numeric_limits<int>::max();
    int count = 0;

    while (inFile >> number) { 
        sum += number;
        if (number > maxNum) maxNum = number;
        if (number < minNum) minNum = number;
        count++;
    }

    if (!inFile.eof() && inFile.fail()) {
        cerr << "Warning: File contains invalid data that was skipped." << endl;
    }

    inFile.close();

    if (count == 0) {
        cout << "No valid integers found in the file." << endl;
    } else {
        cout << "Total numbers read: " << count << endl;
        cout << "Sum of numbers: " << sum << endl;
        cout << "Maximum number: " << maxNum << endl;
        cout << "Minimum number: " << minNum << endl;
    }

    return 0;
}
