#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, W; cin >> n >> W;
		vector<pair<int, int>> a(n);
		for(int i = 0; i < n; i++) cin >> a[i].first;
		for(int i = 0; i < n; i++) cin >> a[i].second;
		vector<int> dp(W + 1, 0);
		for(int i = 0; i < n; i++) {
			for(int j = W; j >= a[i].first; j--) {
				dp[j] = max(dp[j], dp[j - a[i].first] + a[i].second);
			}
		}
		cout << *max_element(dp.begin(), dp.end()) << endl;
	}
	return 0;
}

// 2 1 3 5 1 4 2
// 2 3 5 5 2 3 2