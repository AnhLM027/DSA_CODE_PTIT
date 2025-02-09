#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, m, x; cin >> n >> m;
		set<int> se1, se2, se3;
		for(int i = 0; i < n; i++) {
			cin >> x;
			se1.insert(x);
			se2.insert(x);
		}
		for(int i = 0; i < m; i++) {
			cin >> x;
			se1.insert(x);
			if(se2.count(x)) se3.insert(x);
		}
		for(int x : se1) cout << x << " ";
		cout << endl;
		for(int x : se3) cout << x << " ";
		cout << endl;
	}
	return 0;
}
