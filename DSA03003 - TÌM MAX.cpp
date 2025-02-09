#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define MOD (int)(1e9 + 7)

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<ll> a(n);
		for(ll& x : a) cin >> x;
		sort(a.begin(), a.end());
		ll ans = 0;
		for(int i = 0; i < a.size(); i++) ans = (ans + (a[i] * i) % MOD) % MOD;
		cout << ans << endl;
	}
	return 0;
}