/*5. Mixed Parameters 
Define a class Student (name, marks). Write a non-member function 
compare(const Student &s1, const Student &s2) that takes objects by reference 
and returns the one with higher marks by value.*/

#include <iostream>
using namespace std;

class Student{
    string name;
    int marks;

    public:
    Student(string n = "", int m = 0){
        name = n;
        marks = m;
    }

    void display(){
        cout << "Name: " << name << ", Marks: " << marks;
    }

    int getMarks() const {
        return marks;
    }
};

Student compare(const Student &s1, const Student &s2){
    if (s1.getMarks() >= s2.getMarks())
        return s1;
    else
        return s2;
}

int main(){
    Student st1("Ajay", 85);
    Student st2("Aman", 92);

    cout << "Student 1: ";
    st1.display();
    cout << "\nStudent 2: ";
    st2.display();

    Student topStudent = compare(st1, st2);
    cout << "\nStudent with higher marks: ";
    topStudent.display();

    return 0;
}
