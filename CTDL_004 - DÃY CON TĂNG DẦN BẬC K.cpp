#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void Try(int i, vector<int>& a, int n, int k, int& cnt, int sz, int curNum) {
	if(sz == k) {
		cnt++;
		return;
	}
	for(int j = i + 1; j < a.size(); j++) {
		if(a[j] > curNum) Try(j, a, n, k, cnt, sz + 1, a[j]);
	}
}

int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for(int& x : a) cin >> x;
	int cnt = 0;
	Try(-1, a, n, k, cnt, 0, -1e9);
	cout << cnt << endl;
	return 0;
}