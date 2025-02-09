#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define MOD (int)(1e9 + 7)

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
		int dp[n + 1] = {0};
		dp[0] = 1;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= k; j++) {
				if(i >= j) dp[i] = (dp[i] + dp[i - j]) % MOD;
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}
