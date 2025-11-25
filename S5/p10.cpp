/*10. Student Result Ranking System 
Concepts: Array of objects, sorting, encapsulation, file handling (optional) 
Problem: 
Design a class Student with members: 
rollNo, name, marks[3], total, and grade.
• Calculate total and grade (A for ≥90, B for 80–89, etc.). 
• Sort the array by total marks (descending order). 
• Display the rank list (1st, 2nd, 3rd...). 
• (Optional) Write the rank list to a text file. 
Hint: 
Use encapsulation (private members, public access functions). 
Use a sorting algorithm and maintain ranks dynamically. 
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int marks[3];
public:
    int rollNo;
    string name;
    int total;
    char grade;

    void read() {
        cin >> rollNo >> name >> marks[0] >> marks[1] >> marks[2];
        total = marks[0] + marks[1] + marks[2];
        if(total >= 270) grade = 'A';
        else if(total >= 240) grade = 'B';
        else if(total >= 210) grade = 'C';
        else grade = 'D';
    }

    void display(int rank) {
        cout << rank << " " << rollNo << " " << name << " " << total << " " << grade << endl;
    }
};

void sortStudents(Student s[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].total < s[j+1].total) {
                Student t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    Student s[n];

    for(int i=0;i<n;i++) s[i].read();

    sortStudents(s, n);
    for(int i=0;i<n;i++) s[i].display(i+1);
}
