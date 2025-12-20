#include <iostream>
using namespace std;

int main() {
    int* num = new int;   // Dynamic memory allocation

    cout << "Enter a number: ";
    cin >> *num;

    cout << "Square of the number: " << (*num) * (*num) << endl;

    delete num;   // Deallocate memory

    return 0;
}

