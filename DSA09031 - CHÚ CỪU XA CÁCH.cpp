#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105


int n, k, m; 
int a[maxn][maxn] = {};
bool vis[maxn][maxn] = {};
set<vector<int>> block;
vector<int> res;

int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void DFS(int x, int y, int& cnt) {
	vis[x][y] = true;
	if(a[x][y]) cnt++;

	for(int i = 0; i < 4; i++) {
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= n && !vis[x1][y1]
		&& !block.count({x, y, x1, y1}) && !block.count({x1, y1, x, y})) {
			DFS(x1, y1, cnt);
		}
	}
}

int main() {
    cin >> n >> k >> m;

	for(int i = 1; i <= m; i++) {
		int u, v, x, y; cin >> u >> v >> x >> y;
		block.insert({u, v, x, y});
	}

	for(int i = 1; i <= k; i++) {
		int x, y; cin >> x >> y;
		a[x][y] = 1;
	}

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(!vis[i][j]) {
				int cnt = 0;
				DFS(i, j, cnt);
				res.push_back(cnt);
			}
		}
	}

	int l = res.size();
	ll ans = 0;

	for(int i = 0; i < l; i++) {
		ll sum = 0;
		for(int j = i + 1; j < l; j++) sum += res[j];
		ans += (ll)res[i] * sum;
	}
	cout << ans << endl;
	return 0;
}