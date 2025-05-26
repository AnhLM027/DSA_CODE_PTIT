#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105

int n, m;
set<int> dske[maxn];
bool vis[maxn][maxn] = {};

void DFS(int u, int d, int& ans) {
	ans = max(ans, d);
	
	for(int v : dske[u]) {
		if(!vis[u][v]) {
			vis[u][v] = vis[v][u] = true;
			DFS(v, d + 1, ans);
			vis[u][v] = vis[v][u] = false;
		}
	}
}

int main() {
    int tc; cin >> tc;
	while(tc--) {
		for(int i = 0; i < maxn; i++) dske[i].clear();
		
		cin >> n >> m;
		for(int i = 0; i < m; i++) {
			int x, y; cin >> x >> y;
			dske[x].insert(y);
			dske[y].insert(x);
		}

		int ans = 0;
		for(int i = 0; i < n; i++) {
			memset(vis, false, sizeof(vis));
			DFS(i, 0, ans);
		}
		cout << ans << endl;
	}
	return 0;
}