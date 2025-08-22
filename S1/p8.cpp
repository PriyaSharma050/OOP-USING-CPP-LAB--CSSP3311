/*8. String Length using Pointer Traversal 
Write a function int strLength(char *s) that calculates the length of a string without using 
strlen. Use pointer movement. */
#include<iostream>
int strLength(char *s) {
    char *p = s; 
    int count = 0;

    while (*p != '\0') {
        count++;
        p++;
    }
    return count;
}

using namespace std;
int main(){
    char str[] = "Hello, World";
    int length = strLength(str);
    cout<<"The length of the string "<<str<<" is "<<length;
}