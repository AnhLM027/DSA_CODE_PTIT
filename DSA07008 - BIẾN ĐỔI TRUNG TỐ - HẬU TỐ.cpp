#include <bits/stdc++.h>
using namespace std;

int pre(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

string fix(string s) {
    string ans = "";
    stack<char> st;

    for (char c : s) {
        if (isalpha(c)) ans += c;
        else if (c == '(') st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top(); st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else {
            while(!st.empty() && (pre(st.top()) >= pre(c) ||
                    pre(st.top()) == pre(c) && c != '^')) {
                ans += st.top(); st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        ans += st.top(); st.pop();
    }
    return ans;
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        string s; cin >> s;
        cout << fix(s) << endl;
    }
    return 0;
}
