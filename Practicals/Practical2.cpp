#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
    }

    void display() {
        cout << "\nStudent Details\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}


