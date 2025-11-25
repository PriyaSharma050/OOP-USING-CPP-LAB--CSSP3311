/*Problem 3 — MinMaxPair (Simple class template) 
Objective: Create a class template MinMax<T> that stores two values (minVal, maxVal) 
and has a constructor taking two T values and a print() method to print them as min 
max. 
Input: type and two values. 
Output: min max (use the given values as they are — no need to compute min/max).*/

#include <iostream>
using namespace std;

template <typename T>
class MinMax {
    T minVal, maxVal;
public:
    MinMax(T a, T b) {
        minVal = a;
        maxVal = b;
    }
    void print() {
        cout << minVal << " " << maxVal;
    }
};

int main() {
    string type;
    cout << "Enter type (int, double, string): ";
    cin >> type;

    if (type == "int") {
        int a, b;
        cin >> a >> b;
        MinMax<int> obj(a, b);
        obj.print();
    }
    else if (type == "double") {
        double a, b;
        cin >> a >> b;
        MinMax<double> obj(a, b);
        obj.print();
    }
    else if (type == "string") {
        string a, b;
        cin >> a >> b;
        MinMax<string> obj(a, b);
        obj.print();
    }
}
