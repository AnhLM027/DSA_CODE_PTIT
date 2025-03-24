#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        stack<int> st;
        for(int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            if(c == '+' || c == '-' || c == '/' || c == '*') {
                int op1 = st.top(); st.pop();
                int op2 = st.top(); st.pop();
                int tmp = 0;
                if(c == '+') tmp = op1 + op2;
                else if(c == '-') tmp = op1 - op2;
                else if(c == '*') tmp = op1 * op2;
                else tmp = op1 / op2;
                st.push(tmp);
            }
            else st.push(c - '0');
        }
        cout << st.top() << endl;
    }
}