#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin >> n >> k;
		vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        ll cnt = 0;
        for(int i = 0; i < n; i++) {
            auto it = lower_bound(a.begin() + i + 1, a.end(), a[i] + k);
            int ind = it - a.begin();
            cnt += (ll)ind - i - 1;
        }
        cout << cnt << endl;
    }
    return 0;
}