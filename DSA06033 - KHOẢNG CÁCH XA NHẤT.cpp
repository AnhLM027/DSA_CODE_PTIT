#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"



int main() {
	int tc; cin >> tc;
	while(tc--) {
        int n; cin >> n;
		vector<ll> a(n);
		unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(mp[a[i]] > 0) mp[a[i]] = min(mp[a[i]], i);
            else mp[a[i]] = i + 1;
        }
        sort(a.begin(), a.end());
        int ans = -1e9;
        int curInd = mp[a[0]];
        for(int i = 1; i < n; i++) {
            if(mp[a[i]] - curInd > ans) {
                ans = mp[a[i]] - curInd;
            }
            curInd = min(curInd, mp[a[i]]);
        }
        cout << (ans == -1e9 ? -1 : ans) << endl;
	}
	return 0;
}
