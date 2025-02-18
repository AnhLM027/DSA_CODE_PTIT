#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int n, K; cin >> n >> K;
	vector<vector<int>> a(n, vector<int>(n));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) cin >> a[i][j];
	}
	vector<vector<int>> res;
	vector<int> ind;
	for(int i = 0; i < n; i++) ind.push_back(i);
	do {
		int sum = 0;
		for(int i = 0; i < n; i++) {
			sum += a[i][ind[i]];
		}
		if(sum == K) res.push_back(ind);
	} while(next_permutation(ind.begin(), ind.end()));
	cout << res.size() << endl;
	for(auto v : res) {
		for(int x : v) cout << x + 1 << " ";
		cout << endl;
	}
    return 0;
}