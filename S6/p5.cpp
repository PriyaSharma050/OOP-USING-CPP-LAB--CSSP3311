/*5
 ️. Hierarchical Inheritance 
 Topic: Multiple Derived Classes from One Base 
Problem: 
Create a base class Shape with a function area(). 
Derive two classes: Rectangle and Circle. Override the area() function to compute 
respective areas. 
Learning Outcome: Function overriding in hierarchical inheritance. */

#include <iostream>
using namespace std;

const double PI = 3.14159;
class Shape {
public:
    virtual double area() = 0; 
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return PI * radius * radius;
    }
};

int main() {
    Rectangle r(5.0, 3.0);
    Circle c(4.0);
    cout << "Area of Rectangle: " << r.area() << endl;
    cout << "Area of Circle: " << c.area() << endl;
    return 0;
}