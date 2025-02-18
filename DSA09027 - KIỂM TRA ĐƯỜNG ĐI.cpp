#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


class DSU {
public:
	vector<int> parent, sz;
	DSU(int V) {
		for(int i = 0; i <= V; i++) {
			parent.push_back(i);
			sz.push_back(1);
		}
	}

	int find(int u) {
		if(u == parent[u]) return u;
		return parent[u] = find(parent[u]);
	}
	
	bool Union(int x, int y) {
		int u = find(x);
		int v = find(y);
		if(u != v) {
			if(sz[u] < sz[v]) {
				parent[u] = v;
				sz[v] += sz[u];
			}
			else {
				parent[v] = u;
				sz[u] += sz[v];
			}
			return false;
		}
		return true;
	}
};

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int V, E; cin >> V >> E;
		vector<pair<int, int>> edge;
		DSU dsu(V);
		for(int i = 0; i < E; i++) {
			int x, y; cin >> x >> y;
			dsu.Union(x, y);
		}
		int q; cin >> q;
		while(q--) {
			int u, v; cin >> u >> v;
			if(dsu.find(u) == dsu.find(v)) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}