#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<ll> a(n);
		for(ll& x : a) cin >> x;
		
		stack<ll> st;
		int i = 0;

		ll ans = 0;
		while(i < n) {
			if(st.empty() || a[st.top()] <= a[i]) {
				st.push(i);
				i++;
			}
			else {
				ll h = a[st.top()];
				st.pop();
				if(st.empty()) ans = max(ans, h * i);
				else ans = max(ans, h * (i - st.top() - 1)); 
			}
		}

		while(!st.empty()) {
			ll h = a[st.top()];
			st.pop();
			if(st.empty()) ans = max(ans, h * n);
			else ans = max(ans, h * (n - st.top() - 1)); 
		}
		cout << ans << endl;
	}

	return 0;
}