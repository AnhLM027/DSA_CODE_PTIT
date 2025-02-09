#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		vector<int> dp;
		for(int i = 0; i < n; i++) {
			auto it = upper_bound(dp.begin(), dp.end(), a[i]);
			if(it == dp.end()) dp.push_back(a[i]);
			else *it = a[i];
		}
		cout << n - dp.size() << endl;
	}
	return 0;
}