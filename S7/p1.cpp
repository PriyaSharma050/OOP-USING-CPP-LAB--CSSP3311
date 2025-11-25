/*Problem 1 — printTwo (Function template) 
Objective: Write a function template printTwo that prints two values (of the same 
type) separated by a space. 
Input: First token: type (int/double/string), then two values. 
Output: The two values separated by a space. 
*/

#include <iostream>
using namespace std;

template <typename T>

void printTwo(T a,T b){
    cout<<a<<" "<<b;
}

int main(){
    string type;
    cout<<"Enter type: ";
    cin>>type;
    cout<<"Enter two values: ";
    if(type == "int"){
        int a, b;
        cin>>a>>b;
        printTwo(a,b);
    }
    else if(type == "double"){
        double a, b;
        cin>>a>>b;
        printTwo(a,b);
    }
    else if(type == "string"){
        string a, b;
        cin>>a>>b;
        printTwo(a,b);
    }

}