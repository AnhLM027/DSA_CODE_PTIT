#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int sumDigit(string n) {
	int res = 0;
	for(char c : n) res += c - '0';
	return res;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<pair<int, int>> v(n);
		for(auto& [x, y] : v) {
			int tmp; cin >> tmp;
			cin >> x >> y;
		}
		sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) -> bool {
			return a.first < b.first;
		});

		priority_queue<int, vector<int>, greater<>> pq;
		for(int i = 0; i < n; i++) {
			if(pq.size() < v[i].first) pq.push(v[i].second);
			else if(pq.top() < v[i].second) {
				pq.pop();
				pq.push(v[i].second);
			}
		}
		cout << pq.size() << " ";
		ll ans = 0;
		while(!pq.empty()) {
			ans += pq.top(); pq.pop();
		}
		cout << ans << endl;
	}

	return 0;
}