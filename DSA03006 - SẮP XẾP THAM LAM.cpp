#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool check(const vector<int>& a) {
	int n = a.size();
	for(int i = 0; i < n / 2; i++) {
		if(!((a[i] == i + 1 && a[n - 1 - i] == n - i)
			|| (a[i] == n - i && a[n - 1 -i] == i + 1))) return false;
	}
	return true;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		if(check(a)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}