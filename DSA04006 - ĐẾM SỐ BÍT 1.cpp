#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define AnhLM027 "Lê Minh Anh"
#define MOD (int)(1e9 + 7)

ll sz(ll n) {
    if(n == 0) return 1;
    if(n == 1) return 1;
    return sz(n / 2) * 2 + 1;
}

ll cnt(ll n, ll L, ll R, ll left, ll right) {
    if(R < left || L > right) return 0;
    if(n == 0) return 0;
    if(n == 1) return (L <= left && right <= R) ? 1 : 0;

    ll mid = left + sz(n / 2);
    ll res = 0;
    
    res += cnt(n / 2, L, R, left, mid - 1);
    
    if(L <= mid && mid <= R) res += (n % 2);
    
    res += cnt(n / 2, L, R, mid + 1, right);
    return res;
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        ll n, l, r; cin >> n >> l >> r;
        ll size = sz(n);

        cout << cnt(n, l, r, 1, size) << endl;
    }

    return 0;
}