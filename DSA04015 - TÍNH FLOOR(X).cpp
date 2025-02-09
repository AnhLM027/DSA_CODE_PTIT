#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
		vector<ll> a(n);
		for(ll& x : a) cin >> x;
		auto it = lower_bound(a.begin(), a.end(), k);
		if(*it == k) cout << it - a.begin() + 1 << endl;
		else {
			int ind = it - a.begin();
			if(ind >= 1) cout << ind << endl;
			else cout << "-1" << endl;
		}
	}
	return 0;
}