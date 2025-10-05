/*2. Call by Reference 
Create a class Rectangle (length, breadth). Write a non-member function 
scale(Rectangle &r) that doubles the dimensions of the rectangle. Pass by 
reference and show that changes affect the original object.*/

#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length, breadth;
    Rectangle(int l = 0, int b = 0){
        length = l; 
        breadth = b; 
    }
};

void scale(Rectangle &r){
    r.length *= 2;
    r.breadth *= 2;
}

int main(){
    Rectangle r(5, 10);
    cout << "Before scaling: " << r.length << " x " << r.breadth;
    scale(r);
    cout << "\nAfter scaling: " << r.length << " x " << r.breadth;

    return 0;
}
