/*9. Array of Pointers to Strings 
Declare an array of pointers to char, store 5 names, and print them one by one. */
#include<iostream>
using namespace std;
int main(){
    const char *arr[]= {"Aditi","Avni","Mira","Aarohi","Isha"};
    cout<<"The names are:\n";
    for (int i = 0; i < 5; i++) {
        cout<<arr[i]<<"\n";
    }
}
    