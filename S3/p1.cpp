/*1. Basic Class Definition 
Create a class Student with two data members: rollNo and name. Write a program to: 
 -Create an object of the class. 
 -Assign values to its data members. 
 -Display the values.*/

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    int rollNo;
    string name;
};

int main(){
    Student S1;
    S1.rollNo = 1;
    S1.name = "Ajay Kumar";
    cout << "\nRoll No: " << S1.rollNo;
    cout << "\nName: " << S1.name;

    return 0;
}
