/*4. Return Object by Value 
Write a class Complex (real, imag). Create a non-member function add(Complex 
c1, Complex c2) that returns a new object by value.*/

#include <iostream>
using namespace std;

class Complex{
    double real, imag;

    public:
    Complex(double r = 0, double i = 0){
        real = r;
        imag = i;
    }

    void display(){
        cout << real << " + " << imag << "i" << endl;
    }

    double getReal() const{
        return real; 
    }
    double getImag() const{
        return imag; 
    }
};

Complex add(Complex c1, Complex c2){
    return Complex(c1.getReal() + c2.getReal(), c1.getImag() + c2.getImag());
}

int main(){
    Complex c1(3, 4);
    Complex c2(5, 6);

    cout << "Complex 1: ";
    c1.display();
    cout << "Complex 2: ";
    c2.display();

    Complex c3 = add(c1, c2);
    cout << "Sum: ";
    c3.display();

    return 0;
}
