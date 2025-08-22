/*1. Print Address and Value of a Variable
Write a program to declare an integer variable. Use a pointer to print the address and 
value of that variable.*/
#include<iostream>
using namespace std;
int main(){
    int a= 3;
    int *ptr=&a;
    cout<<"address of a = "<<ptr<<"\nvalue of a = "<<*ptr;
}