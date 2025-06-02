#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define AnhLM027 "Lê Minh Anh"
#define MOD (int)(1e9 + 7)

char Find(ll n, int i, ll dp[], string s) {
    if(i == 0) return s[n - 1];
    
    if(n == dp[i - 1] + 1) return Find(dp[i - 1], i - 1, dp, s);
    else if(n > dp[i - 1]) return Find(n - 1 - dp[i - 1], i - 1, dp, s);
    return Find(n, i - 1, dp, s);
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        ll n; cin >> n;

        long long int dp[100] = {};
        dp[0] = s.size();
        
        int i = 0;
        while(dp[i] < n) {
            dp[i + 1] = dp[i] * 2;
            i++;
        }
        
        cout << Find(n, i, dp, s) << endl;
    }

    return 0;
}

