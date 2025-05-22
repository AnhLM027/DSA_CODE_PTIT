#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005


int main() {
	int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;

        if(s[0] == '0') {
            cout << 0 << endl;
            continue;
        }
        
        int dp[maxn] = {};
        dp[0] = dp[1] = 1;

        for(int i = 2; i <= s.size(); i++) {
            if(s[i - 1] > '0') dp[i] = dp[i - 1];
            if(s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6')) dp[i] += dp[i - 2];
        }

        cout << dp[s.size()] << endl;
    }
	return 0;
}