/*1
 ️. Basic Inheritance: Display Information 
Topic: Single Inheritance 
Problem: 
Create a class Person with data members name and age. Derive a class Student from 
Person that adds a data member course. 
Write a program to input and display details of a student. 
Learning Outcome: Understanding of single inheritance and protected access specifier.*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPersonDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

};

class Student : public Person {
public:
    string course;
    void inputStudentDetails() {
        inputPersonDetails();
        cout << "Enter course: ";
        cin >> course;
    }
    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s;
    s.inputStudentDetails();
    s.displayStudentDetails();
    return 0;
}