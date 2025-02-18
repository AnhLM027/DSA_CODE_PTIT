#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void Try(const vector<int>& a, int i, int sum, vector<vector<int>>& res, vector<int> b) {
	if(sum & 1) res.push_back(b);
	for(int j = i + 1; j < a.size(); j++) {
		b.push_back(a[j]);
		Try(a, j, sum + a[j], res, b);
		b.pop_back();
	}
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		sort(a.begin(), a.end(), greater<>());
		vector<vector<int>> res;
		vector<int> b;
		
		Try(a, -1, 0, res, b);
		sort(res.begin(), res.end());
		for(auto v : res) {
			for(int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}