#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        set<int> se;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            se.insert(x);
        }
        vector<int> a(se.begin(), se.end());
        n = a.size();
        cout << a[n - 1] - a[0] + 1 - n << endl;
	}
	return 0;
}
