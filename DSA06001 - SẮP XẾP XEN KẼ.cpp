#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define MOD (int)(1e9 + 7)

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		sort(a.begin(), a.end());
		int l = 0, r = n - 1;
		while(l < r) {
			cout << a[r--] << " " << a[l++] << " ";
		}
		if(n & 1) cout << a[r];
		cout << endl;
	}
	return 0;
}
