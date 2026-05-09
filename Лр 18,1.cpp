#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

int main() {
    ifstream fin("code.cpp");

    stack<char> st;
    char c;

    while (fin.get(c)) {
        if (c == '(' || c == '{') {
            st.push(c);
        }
        else if (c == ')') {
            if (st.empty() || st.top() != '(') {
                cout << "Error: brackets not correct\n";
                return 0;
            }
            st.pop();
        }
        else if (c == '}') {
            if (st.empty() || st.top() != '{') {
                cout << "Error: brackets not correct\n";
                return 0;
            }
            st.pop();
        }
    }

    fin.close();

    if (st.empty())
        cout << "Brackets are correct\n";
    else
        cout << "Error: missing closing brackets\n";

    return 0;
}
