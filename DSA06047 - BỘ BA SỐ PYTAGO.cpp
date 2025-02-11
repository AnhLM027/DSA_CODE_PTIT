#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc = 1; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        vector<ll> a(n);
        unordered_set<ll> se;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] *= a[i];
            se.insert(a[i]);
        }
        sort(a.begin(), a.end());
        bool ok = false;
        for(int i = 0; i < n - 1; i++) {
            if(ok) break;
            for(int j = i + 1; j < n; j++) {
                if(se.count(a[i] + a[j])) ok = true;
                if(ok) break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
	return 0;
}