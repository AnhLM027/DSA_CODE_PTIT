#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


#define AnhLM027 "Lê Minh Anh"

#define MOD (int)(1e9 + 7)

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		int ans = INT_MIN;
		for (int i = 0; i < n; i++) {
			int dp[1000] = { 0 };
			for (int j = 0; j <= i; j++) {
				dp[j] = a[j];
				for (int k = 0; k < j; k++) {
					if (a[k] < a[j]) {
						dp[j] = max(dp[k] + a[j], dp[j]);
					}
				}
			}
			int dp2[1000] = { 0 };
			for (int j = n - 1; j >= i; j--) {
				dp2[j] = a[j];
				for (int k = n - 1 ; k > j; k--) {
					if (a[k] < a[j]) {
						dp2[j] = max(dp2[k] + a[j], dp2[j]);
					}
				}
			}
			ans = max(ans, dp[i] + dp2[i] - a[i]);
		}
		cout << ans << endl;
    }
    return 0;
}