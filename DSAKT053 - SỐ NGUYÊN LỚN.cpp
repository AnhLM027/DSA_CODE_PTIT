#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        string s, t; cin >> s >> t;
		int n = s.length(), m = t.length();

		vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (s[i - 1] == t[j - 1]) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
				}
				else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
		}
		cout << dp[n][m] << endl;
    }
}