#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		auto it = lower_bound(a.begin(), a.end(), k);
		if(*it != k) cout << "NO" << endl;
		else cout << it - a.begin() + 1 << endl;
	}
	return 0;
}