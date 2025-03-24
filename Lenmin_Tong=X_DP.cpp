#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, X; cin >> n >> X;
    vector<int> a(n);
    int dp[1000] = { 0 };

    for(int& x : a) {
        cin >> x;
        dp[x] = 1;
    }

    for(int j = 1; j <= X; j++) {
        for(int x : a) {
            if(j >= x && dp[j - x]) {
                if(!dp[j]) dp[j] = dp[j - x] + 1;
                else dp[j] = min(dp[j], dp[j - x] + 1);
            }
        }
    }

    if(dp[X] == 0) cout << -1;
    else cout << dp[X];
    return 0;
}