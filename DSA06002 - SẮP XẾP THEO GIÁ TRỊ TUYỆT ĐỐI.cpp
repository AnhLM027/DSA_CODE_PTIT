#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int X;

bool cmp(int a, int b) {
	return abs(X - a) < abs(X - b);
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n >> X;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		stable_sort(a.begin(), a.end(), cmp);
		for(int x : a) cout << x << " ";
		cout << endl;
	}
	return 0;
}
