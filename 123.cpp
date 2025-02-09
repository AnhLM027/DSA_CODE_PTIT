#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
		vector<int> a(n);
		int ind = -1;
		for(int i = 0; i < n; i++) {
		    cin >> a[i];
		    if(a[i] == k) ind = i + 1;
		}
		if(ind >= 0) cout << ind << endl;
		else cout << "NO" << endl;
	}
	return 0;
}