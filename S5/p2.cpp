/*2. Employee Salary Slip Generator 
Concepts: Constructor overloading, array of objects, computation logic 
Problem: 
Define a class Employee with data members id, name, basicSalary, hra, da, and netSalary. 
• Overload constructors: one default and one parameterized. 
• Store records of n employees in an array. 
• Calculate and display netSalary = basicSalary + hra + da. 
• Display employee(s) earning above ₹50,000. */

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int id;
    string name;
    double basicSalary, hra, da, netSalary;

    Employee() {
        id = 0;
        name = "";
        basicSalary = hra = da = netSalary = 0;
    }

    Employee(int i, string n, double b, double h, double d) {
        id = i;
        name = n;
        basicSalary = b;
        hra = h;
        da = d;
        netSalary = 0;
    }

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        cout << "Enter hra: ";
        cin >> hra;
        cout << "Enter da: ";
        cin >> da;
    }

    void calculate() {
        netSalary = basicSalary + hra + da;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee arr[n];

    for (int i = 0; i < n; i++) {
        arr[i].input();
        arr[i].calculate();
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i].name << ", Net Salary: " << arr[i].netSalary << endl;
    }

    cout << "Employees earning above 50000:"<< endl;
    for (int i = 0; i < n; i++) {
        if (arr[i].netSalary > 50000) {
            cout << arr[i].name << " (" << arr[i].netSalary << ")"<< endl;
        }
    }

    return 0;
}
