#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define MOD (int)(1e9 + 7)

ll mul(ll a, ll b) {
    if (b == 0) return 0;
    ll ans = mul(a, b / 2);
    ans = (ans + ans) % MOD;
    if (b % 2 == 1) ans = (ans + a) % MOD;
    return ans;
}

vector<vector<ll>> fibo(vector<vector<ll>> a, vector<vector<ll>> b) {
    vector<vector<ll>> res(2, vector<ll>(2, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                res[i][j] = (res[i][j] + mul(a[i][k], b[k][j])) % MOD;
            }
        }
    }
    return res;
}

ll binPow(vector<vector<ll>> a, ll n) {
    vector <vector<ll>> tmp = a;
    if(n == 1) return a[0][1];
    while(n > 0) {
        if(n % 2 == 1) tmp = fibo(tmp, a);
        n /= 2;
        a = fibo(a, a);
    }
    return tmp[0][1];
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        ll n; cin >> n;
        vector<vector<ll>> a = {{1, 1}, {1, 0}};
        cout << binPow(a, n - 1) << endl;
    }
    return 0;
}