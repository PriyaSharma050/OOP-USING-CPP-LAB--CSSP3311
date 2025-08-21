/*10. Pointer to Array vs Array of Pointers 
Write a program to demonstrate the difference between: 
• A pointer to an array (int (*p)[5]) 
• An array of pointers (int *arr[5]) 
Show how elements are accessed in both cases.*/
#include<iostream>
using namespace std;
int main(){

    int arr1[]={3,4,5,6,7};
    int (*p)[5]= &arr1;
    cout<<"Accessing elements using pointer to array:\n";
    for (int i = 0; i < 5; i++) {
         cout<<(*p)[i]<<"\n";
    }


    int a = 3,b = 4,c = 5,d = 6,e = 7;
    int *arr2[] = {&a,&b,&c,&d,&e};
    cout<<"Accessing elements using array of pointers:\n";
    for (int i = 0; i < 5; i++) {
         cout<<*arr2[i]<<"\n";
    }


}