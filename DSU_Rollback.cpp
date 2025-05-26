#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105


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
    int V, E, Q; cin >> V >> E >> Q;

	vector<pair<int, int>> dsc(1, {0, 0});
	for(int i = 1; i <= E; i++) {
		int x, y; cin >> x >> y;
		dsc.push_back({x, y});
	}

	vector<pair<int, int>> b = dsc;

	vector<pair<int, int>> q;
	for(int i = 0; i < Q; i++) {
		int ind, u; cin >> ind >> u;
		q.push_back({ind, u});
		b[ind] = {0, 0};
	}

	DSU dsu(V);
	for(auto [x, y] : b) {
		if(x != 0 && y != 0) dsu.Union(x, y);
	}
	
	vector<int> ans;

	int i = q.size() - 1;
	do {
		auto [ind, u] = q[i];
		ans.push_back(dsu.sz[dsu.findParent(u)]);
		dsu.Union(dsc[ind].first, dsc[ind].second);
		i--;
	} while(i >= 0);
	
	reverse(ans.begin(), ans.end());
	for(int x : ans) cout << x << "\n";
	
	return 0;
}