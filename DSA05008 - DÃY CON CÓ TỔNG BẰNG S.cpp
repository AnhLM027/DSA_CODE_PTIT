#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
	int tc; cin >> tc;
    while(tc--) {
        int n, S; cin >> n >> S;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        vector<int> dp(S + 1, 0);
        dp[0] = 1;
        for(int x : a) {
            for(int i = S; i >= x; i--) {
                if(dp[i - x]) dp[i] = 1;
            }
        }
        if(dp[S]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}