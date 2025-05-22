#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;

		stack<int> st;
		vector<pair<int, int>> v;
		
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '(') st.push(i);
			else if(!st.empty()) {
				v.push_back({st.top(), i});
				st.pop();
			}
		}
		
		sort(v.begin(), v.end());
		
		int ans = 0;
		int cur = 0;
		for(auto [x, y] : v) {
			if(x >= cur) {
				ans += y - x + 1;
				cur = y;
			}
		}
		cout << ans << endl;
	}

	return 0;
}