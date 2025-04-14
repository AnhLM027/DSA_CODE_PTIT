#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(100000));

ll dp[50] = {0};
ll sz[50] = {0};

ll solve(ll n, ll k) {
	if(n <= 1) return dp[n];
	if(k <= sz[n - 1]) return solve(n - 1, k);
	else return solve(n - 2, k - sz[n - 1]) + dp[n - 1];
}

int main() {
	dp[0] = 1;
	dp[1] = 0;
	sz[0] = sz[1] = 1;
	for(int i = 2; i <= 45; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		sz[i] = sz[i - 1] + sz[i - 2];
	}
	int tc; cin >> tc;
	while(tc--) {
		ll n, k; cin >> n >> k;
		cout << solve(n, k) << endl;
	}
	return 0;
}