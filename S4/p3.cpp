/*3. Call by Pointer 
Create a class Circle (radius). Write a non-member function 
increaseRadius(Circle *c) that increases radius by 5 units. Demonstrate passing 
the object by pointer.*/

#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    Circle(int r = 0){
        radius = r; 
    }
};

void increaseRadius(Circle *c){
    c->radius += 5;
}

int main(){
    Circle C(10);
    cout << "Before increase: " << C.radius << endl;
    increaseRadius(&C);
    cout << "After increase: " << C.radius << endl;
    return 0;
}
