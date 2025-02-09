#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
	int n; cin >> n;
	vector<string> a;
	for(int i = 0; i < n; i++) {
		string s;
		for(int j = 0; j < n; j++) {
			char x; cin >> x;
			s.push_back(x);
		}
		a.push_back(s);
	}
	
	vector<string> res;
	queue<pair<int, int>> q;
	queue<string> p;
	
	q.push({ 0, 0 });
	p.push("");
	
	if (a[0][0] == '0' || a[n - 1][n - 1] == '0') {
		cout << "-1" << endl;
		return;
	}
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		string tmp = p.front();
		q.pop();
		p.pop();
		if (x == n - 1 && y == n - 1) res.push_back(tmp);
		
		if(x + 1 < n && a[x + 1][y] == '1') {
			q.push({ x + 1, y });
			p.push(tmp + "D");
		}
		if(y + 1 < n && a[x][y + 1] == '1') {
			q.push({ x, y + 1 });
			p.push(tmp + "R");
		}
	}
	if(res.empty()) {
		cout << -1 << endl;
		return;
	}
	sort(res.begin(), res.end());
	for(string x : res) cout << x << " ";
	cout << endl;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		solve();
	}
	return 0;
}
