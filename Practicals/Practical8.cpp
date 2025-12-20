#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;
    ifstream inFile;
    string name;
    int roll;

    // Writing to file
    outFile.open("student.txt");
    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    outFile << roll << endl;
    outFile << name << endl;
    outFile.close();

    // Reading from file
    inFile.open("student.txt");
    cout << "\nStudent Details from File\n";
    inFile >> roll;
    inFile.ignore();
    getline(inFile, name);

    cout << "Roll Number: " << roll << endl;
    cout << "Name: " << name << endl;

    inFile.close();

    return 0;
}


