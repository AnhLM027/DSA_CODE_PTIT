#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define MOD (int)(1e9 + 7)

ll binPow(ll n, ll k) {
    if (k == 1) return n % MOD;
    ll x = binPow(n, k / 2);
    x = (x * x) % MOD;
    if(k & 1) return (x * n) % MOD;
    return x;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		ll n; cin >> n;
		string s = to_string(n);
		reverse(s.begin(), s.end());
		ll k = stoll(s);
		cout << binPow(n, k) << endl;
	}
	return 0;
}