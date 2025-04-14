#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int n; cin >> n;
	unordered_map<int, int> mp;
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		mp[x]++;
		mp[y + 1]--;
	}
	vector<pair<int, int>> a(mp.begin(), mp.end());
	sort(a.begin(), a.end());
	
	map<ll, int> prefix;
	int cur = 0;
	for(auto [x, y] : a) {
		cur += y;
		prefix[x] = cur;
	}

	int q; cin >> q;
	while(q--) {
		ll x; cin >> x;
		auto it = prefix.upper_bound(x);
		if(it == prefix.begin()) cout << 0 << endl;
		else {
			it--;
			cout << it -> second << endl;
		}
	}
    return 0;
}