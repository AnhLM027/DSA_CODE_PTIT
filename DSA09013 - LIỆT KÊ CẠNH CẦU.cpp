#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


void DFS(const vector<int> dske[], int u, vector<bool>& vis) {
	vis[u] = true;
	for(auto v : dske[u]) {
		if(!vis[v]) DFS(dske, v, vis);
	}
}

int tplt(const vector<pair<int, int>>& edge, int& V) {
	int cnt = 0;
	vector<bool> vis(V);
	vector<int> dske[V + 1];
	for(auto [x , y] : edge) {
		dske[x].push_back(y);
		dske[y].push_back(x);
	}
	for(int i = 1; i <= V; i++) {
		if(vis[i]) continue;
		DFS(dske, i, vis);
		cnt++;
	}
	return cnt;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int V, E; cin >> V >> E;
		vector<pair<int, int>> edge;
		for(int i = 0; i < E; i++) {
			int x, y; cin >> x >> y;
			if(x > y) swap(x, y);
			edge.push_back({x, y});
		}
		int cnt = tplt(edge, V);
		for(int i = 0; i < E; i++) {
			auto [x, y] = edge[i];
			edge.erase(edge.begin() + i);
			if(cnt < tplt(edge, V)) {
				cout << min(x, y) << " " << max(x, y) << " ";
			}
			edge.insert(edge.begin() + i, {x, y});
		}
		cout << endl;
	}
	return 0;
}