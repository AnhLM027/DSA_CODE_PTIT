#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105



int main() {
    int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;
		string t = s;
		reverse(t.begin(), t.end());

		int n = s.size();
		int dp[maxn][maxn] = {};

		int ans = 0;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= n; j++) {
				if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				ans = max(ans, dp[i][j]);
			}
		}

		cout << n - ans << endl;
	}
	return 0;
}