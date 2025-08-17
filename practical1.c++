#include <iostream>
using namespace std;

int main() {
    int num = 20;
    int* ptr = &num;

    cout << "Value of num: " << num << "\n";
    cout << "Address of num: " << &num << "\n";
    cout << "Value stored in ptr: " << ptr << "\n";
    cout << "Value pointed to by ptr: " << *ptr << "\n";

    return 0;
}
