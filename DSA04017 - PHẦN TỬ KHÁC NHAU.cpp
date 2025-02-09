#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n), b(n - 1);
		for(int& x : a) cin >> x;
		for(int& x : b) cin >> x;
		int l = 0;
		while(l < n - 1 && a[l] == b[l]) l++;
		cout << l + 1 << endl;
	}
	return 0;
}