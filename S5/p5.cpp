/*5. Inventory Stock Update 
Concepts: Array of objects, operator overloading 
Problem: 
Define a class Item with members: code, name, and quantity. 
• Overload the + operator to add quantities of items with the same code. 
• Create an array of items. 
• Merge stock from two inventories (two arrays of objects) into a third array. 
Hint: 
Use operator overloading with an array-based merging logic.*/

#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    int code;
    string name;
    int quantity;

    Item operator+(const Item &x) {
        Item t;
        t.code = code;
        t.name = name;
        t.quantity = quantity + x.quantity;
        return t;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item A[n], B[n], C[2*n];

    cout << "Enter details for inventory A:" << endl;
    for(int i=0;i<n;i++){
        cout << "Enter item " << i+1 << " details (code name quantity): ";
        cin >> A[i].code >> A[i].name >> A[i].quantity;
    }

    cout << "Enter details for inventory B:" << endl;
    for(int i=0;i<n;i++){
        cout << "Enter item " << i+1 << " details (code name quantity): ";
        cin >> B[i].code >> B[i].name >> B[i].quantity;
    }

    int k=0;
    bool merged[n] = {false};
    for(int i=0;i<n;i++) {
        bool found = false;
        for(int j=0;j<n;j++) {
            if(A[i].code == B[j].code) {
                C[k++] = A[i] + B[j];
                merged[j] = true;
                found = true;
                break;
            }
        }
        if(!found)
            C[k++] = A[i];
    }

    for(int j=0;j<n;j++) {
        if(!merged[j]) {
            C[k++] = B[j];
        }
    }

    cout << "\nMerged Inventory:\n" << endl;            
    for(int i=0;i<k;i++){
        cout << C[i].code << " " << C[i].name << " " << C[i].quantity << endl;
    }        
}
