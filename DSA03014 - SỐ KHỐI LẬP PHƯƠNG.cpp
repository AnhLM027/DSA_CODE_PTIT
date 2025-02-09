#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


vector<string> res;

void LapPhuong() {
	for (ll i = 0; i <= 1000; i++) {
		res.push_back(to_string(i * i * i));
	}
}

bool check(string a, string b) {
	int i = 0, j = 0;
	while(i < a.length() && j < b.length()) {
		if (a[i] == b[j]) j++;
		i++;
	}
	return j == b.length();
}

void solve() {
	string s; cin >> s;
	for(ll i = res.size() - 1; i >= 0; i--) {
		if(check(s, res[i])) {
			cout << res[i] << endl;
			return;
		}
	}
	cout << "-1" << endl;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	LapPhuong();
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}