#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


vector<string> init(int n) {
	vector<string> a;
	string s(n, '0');
	while(1) {
		int j = s.size() - 1;
		while(j >= 0 && s[j] == '1') j--;
		if(j < 0) break;
		else {
			s[j] = '1';
			for(int i = j + 1; i < s.size(); i++) s[i] = '0';
			a.push_back(s);
		}
	}
	return a;
}

int main() {
	int n, W; cin >> n >> W;
	vector<pair<int, int>> a(n);
	for(int i = 0; i < n; i++) cin >> a[i].second;
	for(int i = 0; i < n; i++) cin >> a[i].first;
	vector<string> res = init(n);
	int ans = 0;
	string s = "";
	for(string v : res) {
		int sum = 0;
		int weight = 0;
		for(int i = 0; i < n; i++) {
			if(v[i] == '1') {
				sum += a[i].second;
				weight += a[i].first;
			}
		}
		if(weight <= W && sum > ans) {
			ans = sum;
			s = v;
		}
	}
	cout << ans << endl;
	for(char c : s) cout << c << " ";
	return 0;
}