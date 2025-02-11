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
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        bool ok = false;
        for(auto [x, y] : mp) {
            if(y > n / 2) {
                cout << x << endl;
                ok = true;
                break;
            }
        }
        if(!ok) cout << "NO" << endl;
	}
	return 0;
}
