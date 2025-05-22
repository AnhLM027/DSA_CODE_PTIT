#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005


int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int n = s.size();

        vector<vector<bool>> dp(n, vector<bool>(n, false));
        for(int i = 0; i < n; i++) dp[i][i] = true;

        int ans = 1;

        for(int i = 0; i < n - 1; i++) {
            if(s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                ans = 2;
            }
        }

        for(int len = 3; len <= n; len++) {
            for(int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if(s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    ans = max(ans, len);
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}