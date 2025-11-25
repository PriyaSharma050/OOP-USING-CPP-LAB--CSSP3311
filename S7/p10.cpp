/*Problem 10 — openTxt (simple file-type check) 
Objective: Read a filename string. If it ends with .txt print OK; else throw and catch a 
custom exception and print Not txt. Implement a small custom exception class with 
what() returning "Not txt". 
Input: filename (single token). 
Output: OK or Not txt */

#include <iostream>
#include <string>
#include <exception>
using namespace std;

class NotTxtException : public exception {
public:
    const char* what() const noexcept override {
        return "Not txt";
    }
};

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    try {
        if (filename.size() >= 4 && filename.substr(filename.size() - 4) == ".txt") {
            cout << "OK";
        } else {
            throw NotTxtException();
        }
    } catch (const NotTxtException& e) {
        cout << e.what();
    }

    return 0;
}
