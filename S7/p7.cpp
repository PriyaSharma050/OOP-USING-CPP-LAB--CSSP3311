/*Problem 7 — throwOnZero (throw/catch basic) 
Objective: Read integer x. If x==0 throw the string "Zero" and catch it in main to print 
Caught Zero. Otherwise print OK. 
Input: single integer. 
Output: Caught Zero or OK */

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    try {
        if (x == 0)
            throw "Zero";
        else
            cout << "OK";
    } catch (const char* msg) {
        cout << "Caught " << msg;
    }

    return 0;
}
