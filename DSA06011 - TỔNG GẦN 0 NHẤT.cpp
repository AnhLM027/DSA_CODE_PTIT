#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                int tmp = abs(a[i] + a[j]);
                if(tmp < abs(ans)) ans = a[i] + a[j];
            }
        }
        cout << ans << endl;
	}
	return 0;
}
