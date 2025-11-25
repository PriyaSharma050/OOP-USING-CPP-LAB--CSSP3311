/*Problem 5 — StringBox (Class template with string only) 
Objective: Implement Box<T> but test with T = string. Class stores a value, set and 
get. Read one string, store it, then print from get(). 
Input: one word (no spaces). 
Output: the same word. */

#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
    T value;
public:
    void set(T v) {
        value = v;
    }
    T get() {
        return value;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    Box<string> b;
    b.set(input);
    cout << b.get();
}
