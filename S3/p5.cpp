/*5. Default and Parameterized Constructors 
Create a class Circle with data member radius. 
• Write a default constructor that sets radius to 1. 
• Write a parameterized constructor that accepts radius from user. 
• Add a function area() to calculate and display the area. 
• Demonstrate both constructors in main().*/ 

#include <iostream>
using namespace std;

class Circle{
    double radius;
    public:
    Circle(){
        radius = 1;
    }

    Circle(double r) {
        cout << "\nEnter radius: ";
        cin >> radius;
    }

    void area(){
        double a = 3.14159 * radius * radius;
        cout << "\nArea of Circle with radius " << radius << " is " << a;
    }
};

int main(){
    Circle C1;
    cout << "Using default constructor:";
    C1.area();
    Circle c2(0);
    cout << "Circle with user-defined radius:";
    c2.area();
}
