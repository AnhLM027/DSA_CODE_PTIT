#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(100000));


int main() {
	int n, x, y, z; cin >> n >> x >> y >> z;
	set<int> se;
	vector<pair<int, int>> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
		se.insert(a[i].first);
		se.insert(a[i].second);
	}
	int ans = 0;
	for(int l : se) {
		int sum = 0;
		for(auto [u, v] : a) {
			if(l < u) sum += x;
			else if(l > v) sum += z;
			else sum += y;
		}
		ans = max(ans, sum);
	}
	cout << ans << endl;
	return 0;
}