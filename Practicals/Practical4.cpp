#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    void inputStudent() {
        inputPerson();   // Calling base class function
        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        displayPerson(); // Access base class data
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;

    s.inputStudent();
    cout << "\nStudent Details\n";
    s.displayStudent();

    return 0;
}


