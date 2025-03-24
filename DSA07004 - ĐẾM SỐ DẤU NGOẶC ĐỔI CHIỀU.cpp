#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int cnt = 0;
        stack<char> st;
        for(char c : s) {
            if(c == '(') st.push(c);
            else {
                if(st.empty()) {
                    cnt++;
                    st.push(c);
                }
                else st.pop();
            }
        }
        cout << cnt + st.size() / 2 << endl;
    }
}