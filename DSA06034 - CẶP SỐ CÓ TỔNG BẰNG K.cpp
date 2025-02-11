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
        unordered_map<int, int> mp;
        for(int x : a) mp[x]++;
        ll cnt = 0;
        for(int x : a) {
            int y = k - x;
			if(2 * x == k) cnt += (ll)mp[x] * (mp[x] - 1) / 2;
			else cnt += (ll)mp[x] * mp[y];
			mp[x] = 0;
        }
        cout << cnt << endl;
	}
	return 0;
}
