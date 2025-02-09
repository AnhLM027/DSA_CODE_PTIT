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
		sort(a.begin(), a.end());
		string s, t;
		int l = 0;
		while(l < a.size()) {
			s += a[l++] + '0';
			if(l < a.size()) t += a[l++] + '0';
		}
		cout << stoll(s) + stoll(t) << endl;
	}
	return 0;
}