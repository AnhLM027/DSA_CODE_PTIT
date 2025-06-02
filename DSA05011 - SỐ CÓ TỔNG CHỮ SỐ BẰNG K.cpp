#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define AnhLM027 "Lê Minh Anh"
#define MOD (int)(1e9 + 7)


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, k; cin >> n >> k;
        vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));
        
        for(int i = 1; i <= 9; i++) dp[1][i] = 1;

        for(int i = 1; i <= n; i++) {
            for(int j = 0; j <= 9; j++) {
                for(int l = j; l <= k; l++) {
                    dp[i][l] = (dp[i][l] + dp[i - 1][l - j]) % MOD;
                }
            }
        }
        cout << dp[n][k] << endl;
    }

    return 0;
}

