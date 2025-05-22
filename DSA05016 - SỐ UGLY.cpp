#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 10005

int main() {
    vector<int> dp(maxn);
    dp[0] = 1;

    int a = 0, b = 0, c = 0;
    for(int i = 1; i < maxn; i++) {
        dp[i] = min({dp[a] * 2, dp[b] * 3, dp[c] * 5});
        if(dp[i] == dp[a] * 2) a++;
        if(dp[i] == dp[b] * 3) b++;
        if(dp[i] == dp[c] * 5) c++;
    }

    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        cout << dp[n - 1] << endl;
    }
    return 0;
}