#include <bits/stdc++.h>
using namespace std;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int n; cin >> n;
	unordered_map<int, int> mp;
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		mp[x]++;
		mp[y + 1]--;
	}
	int q; cin >> q;
	vector<int> a(q);
	int MAX = 0;
	for(int i = 0; i < q; i++) {
		cin >> a[i];
		MAX = max(MAX, a[i]);
	}
	vector<int> res(MAX + 5);
	int cnt = 0;
	for(int i = 1; i <= MAX; i++) {
		cnt += mp[i];
		res[i] = cnt;
	}
	for(int i = 0; i < q; i++) {
		cout << res[a[i]] << endl;
	}
    return 0;
}