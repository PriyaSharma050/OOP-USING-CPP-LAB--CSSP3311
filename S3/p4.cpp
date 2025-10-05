/*4. Constructors 
Create a class Employee with data members id and salary. 
• Write a parameterized constructor to initialize data members. 
• Create two objects and display their details.*/

#include <iostream>
using namespace std;

class Employee{
    int id;
    double salary;

    public:
    Employee(int a, double b){
        id = a;
        salary = b;
    }

    void display(){
        cout << "\nEmployee ID: " << id;
        cout << "\nSalary: " << salary;
    }
};

int main(){
    Employee E1(1,50000);
    Employee E2(2,60000);
    cout << "\nEmployee 1 details:";
    E1.display();
    cout << "\nEmployee 2 details:";
    E2.display();

    return 0;
}

