#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        stack<char> st;
        bool ok = true;
        for(char c : s) {
            if(c == '[' || c == '{' || c == '(') st.push(c);
            else {
                if(st.empty()) {
                    ok = false;
                    break;
                }
                else if(c == ']' && st.top() == '[') st.pop();
                else if(c == '}' && st.top() == '{') st.pop();
                else if(c == ')' && st.top() == '(') st.pop();
            }
        }
        if(ok && st.size() == 0) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
	return 0;
}