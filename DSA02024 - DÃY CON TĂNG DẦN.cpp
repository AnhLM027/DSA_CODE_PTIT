#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void Try(int i, const vector<int>& a, vector<string>& res, string s, int sz, int curNum) {
	if(sz >= 2) res.push_back(s);
	for(int j = i + 1; j < a.size(); j++) {
		if(a[j] > curNum) {
			Try(j, a, res, s + to_string(a[j]) + " ", sz + 1, a[j]);
		}                       
	}
}

int main() {
	int n; cin >> n;
	vector<int> a(n);
	for(int& x : a) cin >> x;
	vector<string> res;
	Try(-1, a, res, "", 0, -1e9);
	sort(res.begin(), res.end());
	for(string s : res) cout << s << endl;
	return 0;
}