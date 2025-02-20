#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
	int n, k; cin >> n >> k;
	vector<string> a(n);
	for(string& x : a) cin >> x;
	int ans = INT_MAX;
	vector<int> hv;
	for(int i = 0; i < k; i++) hv.push_back(i);
	do {
		int maxNum = INT_MIN, minNum = INT_MAX;
		for(int i = 0; i < n; i++) {
			string s;
			for(int j = 0; j < a[i].size(); j++) s += a[i][hv[j]];
			maxNum = max(maxNum, stoi(s));
			minNum = min(minNum, stoi(s));
		}
		ans = min(ans, maxNum - minNum);
	} while(next_permutation(hv.begin(), hv.end()));
	cout << ans << endl;
	return 0;
}