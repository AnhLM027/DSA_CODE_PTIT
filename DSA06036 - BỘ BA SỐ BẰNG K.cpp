#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        bool ok = false;
        for(int i = 0; i < n; i++) {
            if(a[i] >= k || ok == true) break;
            for(int j = i + 1; j < n; j++) {
                auto it = lower_bound(a.begin() + j + 1, a.end(), k - a[i] - a[j]);
                if(it != a.end() && a[i] + a[j] + *it == k) {
                    ok = true;
                    break;
                }
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
	return 0;
}
