#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		long long dp[n + 1] = {0};
		dp[0] = 1;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= 3; j++) {
				if(i >= j) dp[i] += dp[i - j];
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
}
