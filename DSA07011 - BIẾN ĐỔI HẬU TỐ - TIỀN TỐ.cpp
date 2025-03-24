#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        stack<string> st;
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(c == '+' || c == '-' || c == '/' || c == '*') {
                string op1 = st.top(); st.pop();
                string op2 = st.top(); st.pop();
                string tmp = c + op2 + op1;
                st.push(tmp);
            }
            else st.push(string(1, c));
        }
        cout << st.top() << endl;
    }
}