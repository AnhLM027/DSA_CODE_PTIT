#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(1e15));



int main() {
	int n, q; cin >> n >> q;

	vector<int> a(n + 2, 0);
	while(q--) {
		int x, y; cin >> x >> y;
		a[x]++;
		a[y + 1]++;
	}
	int cur = 0;
	for(int i = 1; i <= n; i++) {
		if(a[i] & 1) cur = 1 - cur;
		cout << cur << " ";
	}
	return 0;
}