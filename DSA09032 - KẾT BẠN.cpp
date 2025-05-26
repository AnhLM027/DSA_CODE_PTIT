#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 100005


class DSU {
public:
	int parent[maxn];
	int sz[maxn];
	DSU(int V) {
		for(int i = 1; i <= V; i++) {
			parent[i] = i;
			sz[i] = 1;
		}
	}
	
	int findParent(int u) {
		if(u == parent[u]) return u;
		return parent[u] = findParent(parent[u]);
	}

	bool Union(int u, int v) {
		u = findParent(u);
		v = findParent(v);
		if(u != v) {
			if(sz[u] < sz[v]) swap(u, v);
			sz[u] += sz[v];
			parent[v] = u;
			return true;
		}
		return false;
	}
};

int main() {
    int tc; cin >> tc;
	while(tc--) {
		int V, E; cin >> V >> E;
		DSU dsu(V);
		
		int ans = 0;
		for(int i = 1; i <= E; i++) {
			int x, y; cin >> x >> y;
			dsu.Union(x, y);
			ans = max(ans, dsu.sz[dsu.findParent(x)]);
		}

		cout << ans << endl;
	}
	
	return 0;
}