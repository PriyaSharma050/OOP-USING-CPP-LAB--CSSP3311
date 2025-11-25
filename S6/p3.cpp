/*3
 ️. Using protected Members 
Topic: Access specifiers 
Problem: 
Create a class Employee with protected data members id and salary. 
Derive a class Manager that sets and displays these details through a member function. 
Learning Outcome: Usage of protected members and inheritance for controlled data 
access.*/

#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    double salary;

};

class Manager : public Employee {
public:
    void ManagerDetails() {
        cout << "Enter Manager ID: ";
        cin >> id;
        cout << "Enter Manager Salary: ";
        cin >> salary;
        cout << "Manager ID: " << id << endl;
        cout << "Manager Salary: " << salary << endl;
    }
};

int main() {
    Manager m;
    m.ManagerDetails();
    return 0;
}

