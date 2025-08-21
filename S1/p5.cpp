/*5. Find Maximum of Three Numbers (Using Pointers as Parameters) 
Write a function int max(int *a, int *b, int *c) that returns the largest of three numbers. */
#include<iostream>
using namespace std;
int max(int *p1, int *p2, int *p3){
   int max= *p1;
   if (*p2> max){
    max = *p2;
   } 
   if (*p3> max){
    max = *p3;
   } 
   return max;
}

int main(){
    int a= 3,b= 4,c= 5;
    cout<<"largest (max) = "<<max(&a,&b,&c);
}