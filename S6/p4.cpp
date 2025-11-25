/*4
 ️. Multi-level Inheritance 
Topic: Multi-level Inheritance 
Problem: 
Create three classes — Person, Employee, and Manager — where Employee inherits from 
Person, and Manager inherits from Employee. 
Each class should add one extra data member and display all details. 
Learning Outcome: Understanding of inheritance hierarchy and passing data through 
constructors.*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;    
    
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    string employeeID;

public:
    Employee(string n, int a, string id) : Person(n, a), employeeID
(id) {}
    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int a, string id, string dept) : Employee(n, a, id), department(dept) {}
    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m("Ajay", 35, "123", "Sales");
    m.displayManager();
    return 0;
}