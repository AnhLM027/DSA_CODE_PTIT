#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105



int main() {
    int tc; cin >> tc;
	while(tc--) {
		int n, x, y, z; cin >> n >> x >> y >> z;

		int dp[n + 1] = {};
		dp[1] = x;

		for(int i = 2; i <= n + 1; i++) {
			if(i % 2 == 0) dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
			else dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
		}
		cout << dp[n] << endl;
	}
	return 0;
}