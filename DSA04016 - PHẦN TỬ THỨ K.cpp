#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, m, k, x; cin >> n >> m >> k;
		multiset<int> se;
		for(int i = 0; i < n + m; i++) {
			cin >> x;
			se.insert(x);
		}
		vector<int> a(se.begin(), se.end());
		cout << a[k - 1] << endl;
	}
	return 0;
}