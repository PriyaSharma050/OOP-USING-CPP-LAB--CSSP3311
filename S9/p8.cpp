/*8. Stack – Check Balanced Parentheses 
Given a string containing {}, (), and [], determine whether it is balanced using a stack.*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isBalanced(const string &s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);  
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) return false;  

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();  
}

int main() {
    string expr;
    cout << "Enter the expression: ";
    getline(cin, expr);

    if (isBalanced(expr)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }

    return 0;
}
