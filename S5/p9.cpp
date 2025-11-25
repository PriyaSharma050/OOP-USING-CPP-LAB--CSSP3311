/*9. Complex Number Operations using Array of Objects 
Concepts: Array of objects, operator overloading, aggregation 
Problem: 
Create a Complex class with data members: real and imag. 
• Overload the + and * operators. 
• Create an array of Complex objects. 
• Compute the sum and product of all complex numbers in the array. 
Hint: 
Use loop: 
sum = sum + arr[i]; 
product = product * arr[i];*/

#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;

    Complex operator+(const Complex &x) {
        Complex t;
        t.real = real + x.real;
        t.imag = imag + x.imag;
        return t;
    }

    Complex operator*(const Complex &x) {
        Complex t;
        t.real = real * x.real - imag * x.imag;
        t.imag = real * x.imag + imag * x.real;
        return t;
    }
};

int main() {
    int n;
    cout << "Enter number of complex numbers: ";
    cin >> n;

    Complex a[n];

    for(int i=0; i<n; i++) {
        cout << "Enter real imag: ";
        cin >> a[i].real >> a[i].imag;
    }

    Complex sum = a[0];
    Complex product = a[0];

    for(int i=1; i<n; i++) {
        sum = sum + a[i];
        product = product * a[i];
    }

    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;
    cout << "Product: " << product.real << " + " << product.imag << "i" << endl;
}
