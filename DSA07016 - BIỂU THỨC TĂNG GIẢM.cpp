#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
    while(tc--) {
		string s; cin >> s;
		stack<int> st;
		st.push(1);
		int cnt = 2;
		string ans = "";
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == 'I') {
				while(!st.empty()) {
					ans += to_string(st.top()); st.pop();
				}
			}
			st.push(cnt++);
		}
		while(!st.empty()) {
			ans += to_string(st.top()); st.pop();
		}
		cout << ans << endl;
    }
	return 0;
}