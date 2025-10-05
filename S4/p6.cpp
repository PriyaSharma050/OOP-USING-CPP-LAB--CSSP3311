/*6. Call by Value (Member Function) 
Create a class Box (length, width, height). Add a member function compare(Box 
b) that compares the calling object with b (passed by value) and prints which is 
larger in volume.*/

#include <iostream>
using namespace std;

class Box{
    double length, width, height;

    public:
    Box(double l = 0, double w = 0, double h = 0){
        length = l;
        width = w;
        height = h;
    }

    double volume(){
        return length * width * height;
    }

    void compare(Box b){
        double vol1 = volume();
        double vol2 = b.volume();

        if (vol1 > vol2)
            cout << "Calling object has larger volume: " << vol1 <<"\n";
        else if (vol1 < vol2)
            cout << "Passed object has larger volume: " << vol2 <<"\n";
        else
            cout << "Both boxes have equal volume: " << vol1 <<"\n";
    }

    void display(){
        cout << "Box dimensions: " << length << " x " << width << " x " << height <<"\n";
    }
};

int main(){
    Box box1(3, 4, 5);
    Box box2(2, 6, 5);
    cout << "Box 1: ";
    box1.display();
    cout << "Box 2: ";
    box2.display();
    box1.compare(box2);

    return 0;
}
