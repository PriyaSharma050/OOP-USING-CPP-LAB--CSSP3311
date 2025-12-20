#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    // Friend function declaration
    friend int calculateArea(Box b);
};

// Friend function definition
int calculateArea(Box b) {
    return b.length * b.width;
}

int main() {
    Box b;
    b.input();

    cout << "Area of the box: " << calculateArea(b) << endl;

    return 0;
}


