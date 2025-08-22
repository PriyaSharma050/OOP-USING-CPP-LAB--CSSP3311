/*3. Increment a Variable using Pointer Parameter 
Write a function void increment(int *p) that increases the value of an integer by 1. Pass 
the variable’s address to this function and print the updated value. */
#include<iostream>
using namespace std;
void increment(int *p){
    (*p)++;
}
int main(){
    int a= 3;
    cout<<"value of a before increment = "<<a;
    increment(&a);
    cout<<"\nvalue of a after increment (updated value) = "<<a;


}