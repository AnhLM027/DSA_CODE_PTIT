#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, x; cin >> n;
		priority_queue<int, vector<int>, greater<>> pq;
		for(int i = 0; i < n; i++) {
			cin >> x;
			pq.push(x);
		}
		ll ans = 0;
		while(pq.size() >= 2) {
			int num1 = pq.top(); pq.pop();
			int num2 = pq.top(); pq.pop();
			ans += (ll)num1 + num2;
			pq.push(num1 + num2);
		}
		cout << ans << endl;
	}
	return 0;
}