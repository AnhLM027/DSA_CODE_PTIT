#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define MOD (int)(1e9 + 7)

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		priority_queue<int, vector<int>, greater<>> pq;
		for(int i = 0; i < n; i++) {
			int x; cin >> x;
			pq.push(x);
		}
		ll ans = 0;
		while(pq.size() >= 2) {
			int num1 = pq.top(); pq.pop();
			int num2 = pq.top(); pq.pop();
			ll num = (ll)num1 + num2;
			ans = (ans + num) % MOD;
			pq.push(num % MOD);
		}
		cout << ans << endl;
	}
	return 0;
}