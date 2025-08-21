/*4. Sum of Two Numbers using Pointers 
Write a function that takes two integer pointers as parameters and returns their sum. Call 
this function in main. */
#include<iostream>
using namespace std;

int sumOfPointers(int *p1, int *p2){
    return *p1+*p2;
}

int main(){
    int a= 3,b = 4;
    cout<<"sum of the given integers is "<<sumOfPointers(&a,&b);
}