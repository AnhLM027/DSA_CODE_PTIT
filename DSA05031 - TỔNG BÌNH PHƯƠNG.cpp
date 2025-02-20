#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<int> dp(n + 1, 0);
        for(int i = 1; i <= n; i++) {
            dp[i] = i;S
            for(int j = 1; j <= sqrt(i); j++) {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}