#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int top = -1;
        char stack[1000];

        for (int i = 0; i < n; i++) {
            char c = s[i];

            if (c == '(' || c == '{' || c == '[') {
                stack[++top] = c;
            }
            else {
                if (top == -1) return false;
                char open = stack[top--];

                if ((c == ')' && open != '(') ||
                    (c == '}' && open != '{') ||
                    (c == ']' && open != '[')) {
                    return false;
                }
            }
        }

        return top == -1;
    }
};

int main() {
    Solution solution;

    string s;
    cout << "Enter the string of parentheses: ";
    cin >> s;

    if (solution.isValid(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
