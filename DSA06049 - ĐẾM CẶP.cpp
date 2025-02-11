#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc = 1; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        ll cnt = 0;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++) {
            auto it = lower_bound(a.begin() + i + 1, a.end(), k + a[i]);
            int ind = it - a.begin();
            cnt += (ll)ind - i - 1;
        }
        cout << cnt << endl;
	}
	return 0;
}