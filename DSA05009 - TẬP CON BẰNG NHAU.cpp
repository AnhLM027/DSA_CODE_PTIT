#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool check(vector<int>& a, int n, int sum) {
    if(sum & 1) return false;
    vector<bool> dp(sum / 2 + 1, false);
    dp[0] = true;
    for(int x : a) {
        for(int i = sum / 2; i >= x; i--) {
            if(dp[i - x]) dp[i] = true;
        }
    }
    return dp[sum / 2];
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> a(n), b;
        int sum = 0;
        for(int& x : a) {
            cin >> x;
            sum += x;
        }
        if(check(a, n, sum)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}