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
		sort(a.begin(), a.end());
		int sum1 = 0, sum2 = 0;
		for(int i = 0; i < n; i++) {
			if(i < k) sum1 -= a[i];
			else sum1 += a[i];
			if(i < n - k) sum2 -= a[i];
			else sum2 += a[i];
		}
		cout << max(sum1, sum2) << endl;
	}
	return 0;
}