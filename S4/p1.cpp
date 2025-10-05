/*1. Call by Value 
Write a program with a class Point (x, y). Create a non-member function 
display(Point p) that takes a Point object by value and prints its coordinates. 
Observe how changes inside the function do not affect the original object.*/

#include <iostream>
using namespace std;

class Point{
    public:
    int x, y;
    Point(int a = 0, int b = 0){
        x = a;
        y = b; 
    }
};

void display(Point p){
    cout << "\nInside function: " << p.x << ", " << p.y;
    p.x = 100; p.y = 200;
}

int main(){
    Point pt(10, 20);
    cout << "Before function call: " << pt.x << ", " << pt.y;
    display(pt);
    cout << "\nAfter function call: " << pt.x << ", " << pt.y;
    return 0;
}
