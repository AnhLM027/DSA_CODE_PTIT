#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


#define AnhLM027 "Lê Minh Anh"

#define MOD (int)(1e9 + 7)

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin >> n >> k;
		if(k > n) cout << "0" << endl;
		else {
			ll ans = 1;
            for(int i = 1; i <= k; i++) {
                ans *= (ll)n - k + i;
                ans %= MOD;
            }
            cout << ans << endl;
		}
    }
    return 0;
}