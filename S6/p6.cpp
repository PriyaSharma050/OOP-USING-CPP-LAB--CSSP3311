/*6. Function Overriding with virtual Keyword 
Topic: Polymorphism via Inheritance 
Problem: 
Create a base class Animal with a speak() function. 
Derive classes Dog and Cat that override this function. 
Use a base class pointer to call the functions and observe behavior with and without 
virtual. 
Learning Outcome: Role of virtual functions in runtime polymorphism. */

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();
    animal1->speak();
    animal2->speak(); 
    delete animal1;
    delete animal2;
    return 0;
}