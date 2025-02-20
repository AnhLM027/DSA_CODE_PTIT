#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<ll> a(n), b(n);
		for(ll& x : a) cin >> x;
		for(ll& x : b) cin >> x;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<>());
		ll sum = 0;
		for(int i = 0; i < n; i++) sum += a[i] * b[i];
		cout << sum << endl;
	}
	return 0;
}