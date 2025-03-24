#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int maxCnt = 0;
        stack<int> st;
        st.push(-1);
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') st.push(i);
            else {
                if(s[st.top()] == '(') {
                    st.pop();
                    maxCnt = max(maxCnt, i - st.top());
                }
                else st.push(i);
            }
        }
        cout << maxCnt << endl;
    }
}