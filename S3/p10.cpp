/*10. Mini Project – Student Report Card 
Create a class Report with: 
• Data members: name, rollNo, marks[5]. 
• Member functions: 
o input() → to take details from user. 
o display() → to show details. 
o calculateGrade() → to calculate total, percentage, and grade (A, B, C, 
Fail). 
Write a program to create multiple objects of Report and display the report card for 
each student.*/

#include <iostream>
using namespace std;

class Report{
    string name;
    int rollNo;
    int marks[5];

    public:
    void input(){
        cout << "\nEnter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void display(){
        cout << "\nName: " << name << "\nRoll No: " << rollNo;
        for (int i = 0; i < 5; i++) {
            cout << "\nMarks in subject " << i + 1 << ": " << marks[i];
        }
        calculateGrade();
    }

    void calculateGrade(){
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        double percentage = total / 5.0;
        cout << "Total: " << total << "\nPercentage: " << percentage << "%\n";

        char grade;
        if (percentage >= 75)
            grade = 'A';
        else if (percentage >= 60)
            grade = 'B';
        else if (percentage >= 50)
            grade = 'C';
        else
            grade = 'F';

        cout << "Grade: " << grade;
    }
};

int main(){
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Report students[n];

    for (int i = 0; i < n; i++){
        cout << "Enter details for student " << i + 1 << ":";
        students[i].input();
    }

    for (int i = 0; i < n; i++){
        cout << "\nReport Card for Student " << i + 1 << ":";
        students[i].display();
    }

    return 0;
}
