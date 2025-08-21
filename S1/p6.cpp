/*6. Access Array Elements using Pointers 
Write a program to input 5 integers in an array. Use pointer arithmetic (not indices) to 
print all the elements. */
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,6,7};
    int *p = arr;
    for(int i=0;i<5;i++){
        cout<<*p<<"\n";
        p++;
    }

}