/*3. Member Functions Outside Class 
Create a class Rectangle with data members length and width. 
• Define a member function area() outside the class (using scope resolution 
operator). 
• In main(), create an object and display its area.*/

#include <iostream>
using namespace std;

class Rectangle{
    double length;
    double width;

    public:
    Rectangle(double l, double w){
        length = l;
        width = w;
    }
    double area();
};

double Rectangle::area(){
    return length * width;
}

int main(){
    Rectangle r(5,6);
    cout << "\nArea of rectangle: " << r.area();

    return 0;
}
