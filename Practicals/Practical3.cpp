#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Constructor
    Student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "Constructor called: Student object created\n";
    }

    // Destructor
    ~Student() {
        cout << "Destructor called: Student object destroyed\n";
    }

    void display() {
        cout << "\nStudent Details\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s(101, "Aman");
    s.display();

    return 0;
}


