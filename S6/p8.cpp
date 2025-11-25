/*
 ️. The Diamond Problem (Moderate) 
Topic: Virtual Base Classes 
Problem: 
Create a class Person, derive Teacher and Student from it, and then derive a class TA from 
both Teacher and Student. 
Demonstrate the diamond problem and resolve it using virtual inheritance. 
Learning Outcome: Understanding the diamond problem and how virtual inheritance 
eliminates duplication of base class members.*/

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string n) : name(n) {
        cout << "Person constructor called for " << name << endl;
    }
};

class Teacher : virtual public Person {
public:
    Teacher(string n) : Person(n) {
        cout << "Teacher constructor called for " << name << endl;
    }
};

class Student : virtual public Person {
public:
    Student(string n) : Person(n) {
        cout << "Student constructor called for " << name << endl;
    }
};

class TA : public Teacher, public Student {
public:
    TA(string n) : Person(n), Teacher(n), Student(n) {
        cout << "TA constructor called for " << name << endl;
    }
};

int main() {
    TA ta("Ajay");
    cout << "TA's name is: " << ta.name << endl; 
    return 0;
}