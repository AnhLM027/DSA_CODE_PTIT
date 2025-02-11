#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		ll n, m, k; cin >> n >> m >> k;
		vector<ll> a(n), b(m), c(k);
        for(ll& x : a) cin >> x;
        for(ll& x : b) cin >> x;
        for(ll& x : c) cin >> x;
		int i = 0, l = 0, r = 0;
        vector<ll> res;
        while(i < n && l < m && r < k) {
            if(a[i] == b[l] && a[i] == c[r]) {
                res.push_back(a[i]);
                i++, l++, r++;
            }
            else if(a[i] < b[l]) i++;
            else if(b[l] < c[r]) l++;
            else r++;
        }
        if(res.size() > 0) {
            for(int x : res) cout << x << " ";
        }
        else cout << "-1";
		cout << endl;
	}
	return 0;
}