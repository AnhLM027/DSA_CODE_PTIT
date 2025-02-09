#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while (tc--) {
		int n, V; cin >> n >> V;
		vector<pair<int, int>> a(n);
		for (int i = 0; i < n; i++) cin >> a[i].first;
		for (int i = 0; i < n; i++) cin >> a[i].second;
		ll dp[1005] = { 0 };
		for (int i = 0; i < n; i++) {
			for (int j = V; j >= a[i].first; j--) {
				dp[j] = max(dp[j - a[i].first] + a[i].second, dp[j]);
			}
		}
		cout << *max_element(dp, dp + V + 1) << endl;
	}
	return 0;
}
