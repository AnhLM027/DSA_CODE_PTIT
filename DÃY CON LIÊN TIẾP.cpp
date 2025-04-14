#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(100000));



int main() {
	int n, q; cin >> n >> q;
	vector<int> a(n);
	for(int& x : a) cin >> x;

	int sum = 0;
	vector<int> maxSubSum(n + 1, 0);
	for(int i = 0; i < n; i++) {
		if(a[i] >= 0) sum += a[i];
		maxSubSum[i + 1] = sum;
	}
	while(q--) {
		int l, r; cin >> l >> r;
		cout << maxSubSum[r] - maxSubSum[l - 1] << endl;
		// cout << *max_element(maxSubSum.begin() + l, maxSubSum.begin() + r + 1) << endl;
	}
	return 0;
}