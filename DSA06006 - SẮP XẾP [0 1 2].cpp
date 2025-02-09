#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, x; cin >> n;
		multiset<int> se;
		for(int i = 0; i < n; i++) {
			cin >> x;
			se.insert(x);
		}
		for(int x : se) cout << x << " ";
		cout << endl;
	}
	return 0;
}
