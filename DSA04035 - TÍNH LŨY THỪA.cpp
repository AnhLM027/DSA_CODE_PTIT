#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define MOD (int)(1e9 + 7)

int main() {
	ll n, k;
	while(cin >> n) {
		cin >> k;
		if(n == 0 && k == 0) break;
		ll ans = 1;
		while(k) {
			if(k & 1) ans = (ans * n) % MOD;
			n = (n * n) % MOD;
			k /= 2;
		}
		cout << ans << endl;
	}
	return 0;
}