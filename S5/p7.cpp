/*7. Car Dealership Records 
Concepts: Array of objects, aggregation, string matching 
Problem: 
Make a class Car with data members: model, company, price.
• Store n car objects. 
• Display all cars of a particular company. 
• Find and display the most expensive car in the array. 
Extension: 
Allow case-insensitive search using transform(). 
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Car {
public:
    string model, company;
    double price;
};

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car c[n];

    for(int i=0; i<n; i++) {
        cout << "Enter model company price: ";
        cin >> c[i].model >> c[i].company >> c[i].price;
    }

    string key;
    cout << "Enter company to search: ";
    cin >> key;

    string key2 = key;
    transform(key2.begin(), key2.end(), key2.begin(), ::tolower);

    for(int i=0; i<n; i++) {
        string temp = c[i].company;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        if(temp == key2) {
            cout << c[i].model << " " << c[i].company << " " << c[i].price << endl;
        }
    }

    int idx = 0;
    for(int i=1; i<n; i++) {
        if(c[i].price > c[idx].price)
            idx = i;
    }

    cout << "Most expensive: "
         << c[idx].model << " "
         << c[idx].company << " "
         << c[idx].price << endl;
}
