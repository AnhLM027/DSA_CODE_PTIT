#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int C(int n, int k) {
	if(k == n || k == 0) return 1;
	return C(n - 1, k) + C(n - 1, k - 1);
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, m, x; cin >> n >> m;
		for(int i = 0; i < n * m; i++) cin >> x;
		cout << C(n + m - 2, n - 1) << endl;
	}
	return 0;
}
