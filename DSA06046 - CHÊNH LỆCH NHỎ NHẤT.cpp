#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc = 1; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        int ans = INT_MAX;
        for(int i = 1; i < n; i++) {
            ans = min(ans, a[i] - a[i - 1]);
        }
        cout << ans << endl;
	}
	return 0;
}