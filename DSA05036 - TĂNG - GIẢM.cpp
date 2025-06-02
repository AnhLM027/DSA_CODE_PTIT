#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define AnhLM027 "Lê Minh Anh"



int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<double> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i] >> b[i];

        vector<int> dp(n, 1);

        int ans = 1;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(a[i] > a[j] && b[i] < b[j]) dp[i] = max(dp[i], dp[j] + 1);
                ans = max(ans, dp[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}

