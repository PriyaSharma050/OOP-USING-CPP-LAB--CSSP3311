/*Problem 8 — parsePositive (validation with exception) 
Objective: Read one integer as string. If it is negative (starts with -), throw 
std::invalid_argument and catch to print Negative not allowed. Otherwise print the 
number. (You may use stoi inside try-catch.)
Input: a string representing an integer. 
Output: number or Negative not allowed  
*/

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    string s;
    cout << "Enter an integer: ";
    cin >> s;

    try {
        if (!s.empty() && s[0] == '-') {
            throw invalid_argument("Negative not allowed");
        }
        int num = stoi(s);
        cout << num;
    } catch (const invalid_argument&) {
        cout << "Negative not allowed";
    }

    return 0;
}
