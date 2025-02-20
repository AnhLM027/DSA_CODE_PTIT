#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define MOD (int)(1e9 + 7)

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        vector<int> dp(k + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= k; i++) {
            for(int x : a) {
                if(i >= x) dp[i] = (dp[i] + dp[i - x]) % MOD;
            }
        }
        cout << dp[k] << endl;
    }
    return 0;
}