/*8. Object as Function Argument 
Create a class Complex with two data members real and imag. 
• Define a function add(Complex c) that adds the current object with object c 
and returns the result. 
• In main(), create two complex numbers and add them.*/

#include <iostream>
using namespace std;

class Complex{
    double real, imag;

    public:
    Complex(double r = 0, double i = 0){
        real = r;
        imag = i;
    }

    Complex add(Complex c){
        return Complex(real + c.real, imag + c.imag);
    }

    void display(){
        cout << real << " + " << imag << "i\n";
    }
};

int main(){
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3 = c1.add(c2);
    c3.display();
    return 0;
}
