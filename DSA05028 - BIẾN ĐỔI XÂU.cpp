#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105



int main() {
    int tc; cin >> tc;
	while(tc--) {
		string s, t; cin >> s >> t;

		int n = s.size(), m = t.size();
		int dp[maxn][maxn] = {};
		
		for(int i = 0; i <= n; i++) {
			for(int j = 0; j <= m; j++) {
				if(i == 0 || j == 0) dp[i][j] = i + j;
				else if(s[i - 1] == t[j - 1]) dp[i][j] = dp[i - 1][j - 1];
				else dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
			}
		}

		cout << dp[n][m] << endl;
	}
	return 0;
}