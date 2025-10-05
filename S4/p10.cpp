/*10. Combination Example 
Create a class Employee (id, salary). Add two functions:
• A member function updateSalary(Employee &e) that copies salary from another 
employee. 
• A non-member function swap(Employee *e1, Employee *e2) that swaps salaries 
of two employees using pointers.*/

#include <iostream>
using namespace std;

class Employee{
    int id;
    double salary;

    public:
    Employee(int i, double s){
        id = i;
        salary = s;
    }

    void display(){
        cout << "ID: " << id << ", Salary: " << salary <<"\n";
    }

    void updateSalary(Employee &e){
        salary = e.salary;
    }

    friend void swap(Employee *e1, Employee *e2);
};

void swap(Employee *e1, Employee *e2){
    double temp = e1->salary;
    e1->salary = e2->salary;
    e2->salary = temp;
}

int main(){
    Employee emp1(1,50000);
    Employee emp2(2,60000);

    cout << "Before updating and swapping:\n";
    emp1.display();
    emp2.display();

    emp1.updateSalary(emp2);
    cout << "\nAfter emp1 copies salary from emp2:\n";
    emp1.display();
    emp2.display();

    swap(&emp1, &emp2);
    cout << "\nAfter swapping salaries:\n";
    emp1.display();
    emp2.display();

    return 0;
}
