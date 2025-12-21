/*5. Student Records Using Binary File 
Write a C++ program to store and retrieve student records (roll number, name, and 
marks) using a binary file. 
The program should: 
1. Allow the user to enter details of n students and write them into a binary file using 
write(). 
2. Open the file again, read all the records using read(), and display them in a 
formatted manner. */

#include <iostream>
#include <fstream> 
#include <iomanip>
using namespace std;

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    const char* filename = "students.dat";
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    // Writing student records to binary file
    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cerr << "Error: Could not open file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        Student student;
        cout << "Enter details for student " << (i + 1) << ":\n";
        cout << "Roll Number: ";
        cin >> student.rollNumber;
        cout << "Name: ";
        cin.ignore();
        cin.getline(student.name, 50);
        cout << "Marks: ";
        cin >> student.marks;

        outFile.write(reinterpret_cast<char*>(&student), sizeof(Student));
    }
    outFile.close();
    cout << "Student records written to " << filename << endl;

    // Reading student records from binary file
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cerr << "Error: Could not open file for reading." << endl;
        return 1;
    }

    cout << "\nStudent Records:\n";
    cout << left << setw(15) << "Roll Number" 
         << setw(30) << "Name" 
         << setw(10) << "Marks" << endl;
    cout << string(55, '-') << endl;

    Student student;
    while (inFile.read(reinterpret_cast<char*>(&student), sizeof(Student))) {
        cout << left << setw(15) << student.rollNumber 
             << setw(30) << student.name 
             << setw(10) << student.marks << endl;
    }
    inFile.close();

    return 0;
}