#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

#define MOD (int)123456789

int main() {
	int tc; cin >> tc;
	while(tc--) {
		ll n; cin >> n;
		n--;
		ll ans = 1;
		ll tich = 2;
		while(n > 0) {
			if(n & 1) ans = (ans * tich) % MOD;
			tich = (tich * tich) % MOD;
			n /= 2;
		}
		cout << ans << endl;
	}
	return 0;
}