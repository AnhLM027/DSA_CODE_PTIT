#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int count(string a, string b) {
	int res = 0;
	int cnt[26] = {};
	for(char c : a) cnt[c - 'A']++;
	for(char c : b) {
		cnt[c - 'A']++;
		if(cnt[c - 'A'] == 2) res++;
	}
	return res;
}

int main() {
	int n; cin >> n;
	vector<string> a(n);
	for(string& s : a) cin >> s;
	vector<vector<int>> b(n, vector<int>(n, 0));
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == j) continue;
			b[i][j] = count(a[i], a[j]);
		}
	}
	int cnt = INT_MAX;
	vector<int> ind;
	for(int i = 0; i < n; i++) ind.push_back(i);
	do {
		int tmp = 0;
		for(int i = 0; i < n - 1; i++) {
			tmp += b[ind[i]][ind[i + 1]];
		}
		cnt = min(cnt, tmp);
	} while (next_permutation(ind.begin(), ind.end()));
	cout << cnt << endl;
    return 0;
}