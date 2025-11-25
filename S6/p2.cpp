/*2
 ️. Constructor and Inheritance 
Topic: Constructor Calling Order 
Problem: 
Create two classes Base and Derived. Both have constructors and destructors that display 
messages when called. 
Create an object of Derived and observe the order of constructor/destructor calls. 
Learning Outcome: Understanding of constructor–destructor call hierarchy in inheritance. */

#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor called" << endl;
    }
    ~Base() {
        cout << "Base Destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived Destructor called" << endl;
    }
};

int main() {
    Derived obj; 
    return 0;
}