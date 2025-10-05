/*6.Destructor 
Create a class FileHandler with a constructor that prints "File opened" and a destructor 
that prints "File closed". 
• Create an object in main() and observe the order of constructor and destructor 
calls.*/

#include <iostream>
using namespace std;

class FileHandler{
    public:
    FileHandler(){
        cout << "\nFile opened";
    }

    ~FileHandler(){
        cout << "\nFile closed";
    }
};

int main(){
    cout << "Creating FileHandler object";
    FileHandler F;
    cout << "\nInside main function";
    return 0;
}
