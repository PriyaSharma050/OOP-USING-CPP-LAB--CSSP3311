/*8. Online Shopping Cart 
Concepts: Array of objects, composition, discount logic 
Problem: 
Define a class Product with attributes: id, name, price, discount. 
• Create an array of objects representing cart items. 
• Compute the total amount payable after applying discounts. 
• Display products sorted by final price (after discount). 
Hint: 
Use (price - (price * discount / 100)) for each product. 
Implement a function to compute the total bill. */


#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    int id;
    string name;
    double price, discount;

    double finalPrice() {
        return price - (price * discount / 100);
    }
};

void sortProducts(Product p[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(p[j].finalPrice() > p[j+1].finalPrice()) {
                Product t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    }
}

double totalBill(Product p[], int n) {
    double sum = 0;
    for(int i=0; i<n; i++) sum += p[i].finalPrice();
    return sum;
}

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Product p[n];

    for(int i=0; i<n; i++) {
        cout << "Enter id name price discount: ";
        cin >> p[i].id >> p[i].name >> p[i].price >> p[i].discount;
    }

    sortProducts(p, n);

    for(int i=0; i<n; i++) {
        cout << p[i].id << " " << p[i].name << " " << p[i].finalPrice() << endl;
    }

    cout << "Total Bill: " << totalBill(p, n);
}
