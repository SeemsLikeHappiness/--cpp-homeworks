#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {
            if (st.empty()) return false;

            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    setlocale(LC_ALL, "Russian");
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([])";
    string test5 = "([)]";

    cout << "Входные данные: s = \"" << test1 << "\" "<< endl;
    cout << "Выходные данные: " << (isValid(test1) ? "true" : "false") << endl;
    cout << "Входные данные: s = \"" << test2 << "\" " << endl;
    cout << "Выходные данные: " << (isValid(test2) ? "true" : "false") << endl;
    cout << "Входные данные: s = \"" << test3 << "\" " << endl;
    cout << "Выходные данные: " << (isValid(test3) ? "true" : "false") << endl;
    cout << "Входные данные: s = \"" << test4 << "\" " << endl;
    cout << "Выходные данные: " << (isValid(test4) ? "true" : "false") << endl;
    cout << "Входные данные: s = \"" << test5 << "\" " << endl;
    cout << "Выходные данные: " << (isValid(test5) ? "true" : "false") << endl;

    string userInput;
    cin >> userInput;

    if (isValid(userInput)) {
        cout << "Результат: true" << endl;
    }
    else {
        cout << "Результат: false" << endl;
    }

    return 0;
}