#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void Try(const vector<int>& a, int i, int sum, const int& M, vector<vector<int>>& res, vector<int> b) {
	if(sum >= M) {
		if(sum == M) res.push_back(b);
		return;
	}
	for(int j = i; j < a.size(); j++) {
		b.push_back(a[j]);
		Try(a, j, sum + a[j], M, res, b);
		b.pop_back();
	}
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, M; cin >> n >> M;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		sort(a.begin(), a.end());
		vector<vector<int>> res;
		vector<int> b;
		
		Try(a, 0, 0, M, res, b);
		if(res.size() == 0) {
			cout << "-1" << endl;
			continue;
		}
		for(auto v : res) {
			cout << "[";
			for(int i = 0; i < v.size(); i++) {
				cout << v[i];
				if(i < v.size() - 1) cout << " ";
			}
			cout << "]";	
		}
		cout << endl;
	}
	return 0;
}