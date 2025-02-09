#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;

bool isValid(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}

void DFS(vector<string>& a, int x, int y) {
	a[x][y] = '.';
	for(auto& v : dir) {
		int x1 = x + v[0], y1 = y + v[1];
		if(isValid(x1, y1) && a[x1][y1] == '#') {
			DFS(a, x1, y1);
		}
	}
}

int main() {
	cin >> n >> m;
	vector<string> a(n);
	for(string& s : a) cin >> s;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i][j] == '#') {
				DFS(a, i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}