#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int ans = 0;
        for(auto& v : a) {
            for(int& x : v) {
                cin >> x;
                ans = max(ans, x);
            }
        }
        vector<vector<int>> dp = a;
        for(int i = 1; i < n; i++) {
            for(int j = 1; j < m; j++) {
                if(!a[i][j]) dp[i][j] = 0;
                else {
                    dp[i][j] = min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]}) + 1;
                }
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}