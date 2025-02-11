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
        multiset<int> se;
        for(int i = 0; i < k; i++) se.insert(a[i]);
        cout << *prev(se.end()) << " ";
        for(int i = k; i < n; i++) {
            se.insert(a[i]);
			se.erase(se.find(a[i - k]));
			cout << *prev(se.end()) << " ";
        }
        cout << endl;
	}
	return 0;
}
