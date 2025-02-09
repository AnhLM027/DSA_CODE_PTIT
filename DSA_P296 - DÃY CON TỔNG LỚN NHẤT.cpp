#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int n, q; cin >> n >> q;
	vector<int> a(n);
	for(int& x : a) {
		cin >> x;
		if(x < 0) x = 0;
	}
	vector<int> dp(n + 1, 0);
	for(int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + a[i - 1];
	}
	while(q--) {
		int l, r; cin >> l >> r;
		cout << dp[r] - dp[l - 1] << endl;  
	}
	return 0;
}