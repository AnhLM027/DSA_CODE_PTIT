#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc = 1; //cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<ll> a(n);
		for(ll& x : a) cin >> x;
		sort(a.begin(), a.end());
		cout << max({a[0] * a[1], a[n - 1] * a[n - 2],
					 a[0] * a[1] * a[n - 1], a[n - 3] * a[n - 2] * a[n - 1]});
	}
	return 0;
}