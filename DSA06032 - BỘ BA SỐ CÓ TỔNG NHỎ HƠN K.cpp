#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		ll n, k; cin >> n >> k;
        vector<ll> a(n);
        for(ll& x : a) cin >> x;
        sort(a.begin(), a.end());
        ll cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] >= k) break;
            for(int j = i + 1; j < n; j++) {
                auto it = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]);
                cnt += (ll)(it - a.begin()) - j - 1;
            }
        }
        cout << cnt << endl;
	}
	return 0;
}
