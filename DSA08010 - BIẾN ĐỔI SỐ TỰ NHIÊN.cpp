#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"



int main() {
    int tc; cin >> tc;
    while (tc--) {
		int n; cin >> n;
		queue<pair<int, int>> qe;
		qe.push({n, 0});

		unordered_map<int, bool> mp;
		mp[n] = true;
		
		int ans = INT_MAX;

		while(!qe.empty()) {
			auto [val, cnt] = qe.front(); qe.pop();

			if(val == 1) {
				ans = min(ans, cnt);
				break;
			}

			if(!mp[val - 1]) {
				mp[val - 1] = true;
				qe.push({val - 1, cnt + 1});
			}

			for(int i = 2; i <= sqrt(val); i++) {
				if(val % i == 0 && !mp[val / i]) {
					mp[val / i] = true;
					qe.push({val / i, cnt + 1});
				}
			}
		}
		cout << ans << endl;
    }
	return 0;
}