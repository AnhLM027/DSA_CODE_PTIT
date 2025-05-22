#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
		int n, m, p; cin >> n >> m >> p;
        string s, t, r; cin >> s >> t >> r;

		vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(m + 1, vector<int>(p + 1, 0)));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				for(int k = 1; k <= p; k++) {
					if(s[i - 1] == t[j - 1] && s[i - 1] == r[k - 1]) {
						dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
					}
					else dp[i][j][k] = max({dp[i][j][k - 1], dp[i][j - 1][k], dp[i - 1][j][k]});
				}
			}
		}
		cout << dp[n][m][p] << endl;
    }
}