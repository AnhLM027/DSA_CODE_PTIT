#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
		vector<int> a(k + 1);
		for(int i = 1; i <= k; i++) {
			cin >> a[i];
		}
		int j = k;
		while(j >= 1 && a[j] == n - k + j) j--;
		if(j < 1) cout << k << endl;
		else {
			unordered_set<int> se(a.begin(), a.end());
			a[j]++;
			for(int i = j + 1; i <= k; i++) a[i] = a[j] + i - j;
			int cnt = k;
			for(int i = 1; i <= k; i++) {
				if(se.count(a[i])) cnt--;
			}
			cout << cnt << endl;
		}
	}
	return 0;
}