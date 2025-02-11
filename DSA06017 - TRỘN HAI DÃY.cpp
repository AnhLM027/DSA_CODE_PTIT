#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, m; cin >> n >> m;
        multiset<int> se;
        for(int i = 0; i < n + m; i++) {
            int x; cin >> x;
            se.insert(x);
        }
        for(int x : se) cout << x << " ";
        cout << endl;
	}
	return 0;
}
