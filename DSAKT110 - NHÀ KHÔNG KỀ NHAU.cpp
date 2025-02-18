#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		if(n == 1) cout << a[0] << endl;
		else if(n == 2) {
			cout << max(a[0], a[1]) << endl;
		}
		else {
			vector<int> dp(n + 1, 0);
			dp[0] = a[0];
			dp[1] = a[1];
			dp[2] = a[0] + a[2];
			for(int i = 3; i < n; i++) {
				dp[i] = a[i] + max(dp[i - 2], dp[i - 3]);
			}
			cout << *max_element(dp.begin(), dp.end()) << endl;
		}
	}
	return 0;
}