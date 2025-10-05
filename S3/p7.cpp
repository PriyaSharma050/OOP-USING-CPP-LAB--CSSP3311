/*7. Copy Constructor 
Create a class Car with data members brand and price. 
• Define a copy constructor to initialize one object from another. 
• Demonstrate copy constructor in main().*/

#include <iostream>
#include <string>
using namespace std;

class Car{
    string brand;
    double price;
    public:
    Car(string b, double p){
        brand = b;
        price = p;
    }

    Car(const Car &c){
        brand = c.brand;
        price = c.price;
        cout << "\nCopy constructor called!";
    }

    void display(){
        cout << "\nBrand: " << brand << ", Price: " << price;
    }
};

int main(){
    Car car1("Toyota", 15000);
    cout << "Original car details:";
    car1.display();
    Car car2 = car1; 
    cout << "\nCopied car details:";
    car2.display();
    return 0;
}