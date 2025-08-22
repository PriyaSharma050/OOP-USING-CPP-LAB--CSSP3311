/*2. Swap Two Numbers (Call by Value vs Call by Reference) 
Write two functions: 
• One that swaps numbers using call by value. 
• One that swaps numbers using call by reference (pointers). 
Show the difference in output.*/
#include<iostream>
using namespace std;
void callByValue(int x,int y){
    int temp = x;
    x=y;
    y= temp;
    cout<<"Swapping by call by value a = "<<x<<" and b = "<<y<<"\n";
}

void callByReference(int &x,int &y){
    int temp = x;
    x=y;
    y= temp;
    cout<<"Swapping by call by reference a = "<<x<<" and b = "<<y<<"\n";
}

int main(){
    int a= 3,b= 4;
    cout<<"Before swapping value of a = "<<a<<" and b = "<<b<<"\n";
    callByValue(a,b);
    cout<<"After swapping by call by value a = "<<a<<" and b = "<<b<<"\n";
    callByReference(a,b);
    cout<<"After swapping by call by reference a = "<<a<<" and b = "<<b<<"\n";
}