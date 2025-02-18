#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"



vector<vector<int>> res;
int n, k;

void Try(int i, int st, vector<int> a, vector<int> b) {
	for (int j = st; j <= n; j++) {
		b[i] = j;
		if(i == k) {
			res.push_back(b);
			return;
		}
		else Try(i + 1, j + 1, a, b);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		vector<int> b(n + 1);
		Try(0, 0, a, b);
		sort(res.begin(), res.end());
		for (auto v : res) {
			for (int i = 0; i < k; i++) cout << a[v[i]] << " ";
            cout << endl;
		}
		res.clear();
	}
	return 0;
}