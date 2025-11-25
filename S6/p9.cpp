/*9
 ️. Operator Overloading with Inheritance (Moderate) 
Topic: Inheritance + Operator Overloading 
Problem: 
Create a class Vector2D with x and y coordinates and overload the + operator. 
Derive a class Vector3D that adds z coordinate and overloads the + operator as well. 
Show how the derived operator reuses base functionality.
Learning Outcome: Combining operator overloading with inheritance and reusing base 
class code.*/

#include <iostream>
using namespace std;

class Vector2D {
protected:
    int x, y;

    public:
    Vector2D(){
    x = 0;
    y = 0;
    }
    Vector2D(int x1, int y1) {
    x = x1;
    y = y1;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    Vector2D operator+(const Vector2D &v) const {
        return Vector2D(x + v.x, y + v.y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")";
    }
};

class Vector3D : public Vector2D {
    int z;
public:
    Vector3D() : Vector2D() {
    z = 0;
    }
    Vector3D(int x, int y, int z) : Vector2D(x, y) {
        this->z = z;
    }

    int getZ() const {
        return z;
    }

    Vector3D operator+(const Vector3D &v) const {
        Vector2D baseSum = Vector2D(x, y) + Vector2D(v.x, v.y);
        return Vector3D(baseSum.getX(), baseSum.getY(), z + v.z);
    }

    void display() const {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    Vector2D a(2, 3), b(4, 1);
    Vector3D p(1, 2, 3), q(4, 5, 6);

    Vector2D sum2D = a + b;
    Vector3D sum3D = p + q;

    cout <<"Result Vector2D: ";
    sum2D.display();
    cout << endl;
    cout <<"Result Vector3D: ";
    sum3D.display();

    return 0;
}
