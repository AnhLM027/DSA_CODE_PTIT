#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


bool DFS(int u, int parent, vector<vector<int>>& dske, vector<bool>& vis) {
	vis[u] = true;
	for(int v : dske[u]) {
		if(!vis[v]) {
			if(DFS(v, u, dske, vis)) return true;
		}
		else if(v != parent) return true;
	}
	return false;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int V, E; cin >> V >> E;
		vector<vector<int>> dske(V + 1);
		vector<bool> vis(V + 1, false);
		for(int i = 0; i < E; i++) {
			int x, y; cin >> x >> y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}
		bool check = false;
		for(int i = 1; i <= V; i++) {
			if(!vis[i]) check = check || DFS(i, -1, dske, vis);
			if(check) break;
		}
		if(check) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}