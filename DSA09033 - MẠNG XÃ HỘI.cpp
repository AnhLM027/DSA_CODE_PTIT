#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 100005


class DSU {
public:
	int parent[maxn];
	int sz[maxn];
	unordered_map<int, int> cnt;
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
		
		for(int i = 1; i <= E; i++) {
			int x, y; cin >> x >> y;
			dsu.Union(x, y);
			dsu.cnt[dsu.findParent(x)]++;
		}
		
		bool check = true;
		for(int i = 1; i <= V; i++) {
			int u = dsu.findParent(i);
			int sz = dsu.sz[u];
			if(sz * (sz - 1) / 2 != dsu.cnt[u]) {
				check = false;
				break;
			}
		}
		if(check) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}