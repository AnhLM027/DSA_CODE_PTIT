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

    int Find(int u) {
        if(u == parent[u]) return u;
        return parent[u] = Find(parent[u]);
    }
    
    bool Union(int u, int v) {
        u = Find(u);
        v = Find(v);

        if(u != v) {
            if(sz[u] >= sz[v]) {
                sz[u] += sz[v];
                parent[v] = u;
            } else {
                sz[v] += sz[u];
                parent[u] = v;
            }
            return true;
        }
        return false;
    }
};

int V, E;
vector<tuple<int, int, int>> dsc;
int Sum = 0;

void Kruskal() {
    DSU dsu(V);

    int cnt = 0;
    for(int i = 0; i < E; i++) {
        if(cnt == V - 1) break;
        
        auto [u, v, w] = dsc[i];
        if(dsu.Union(u, v)) {
            Sum += w;
            cnt++;
        }
    }
}

int main() {
	int tc; cin >> tc;
    while(tc--) {
        dsc.clear();
        Sum = 0;
        
        cin >> V >> E;
        
        for(int i = 1; i <= E; i++) {
            int x, y, w; cin >> x >> y >> w;
            dsc.push_back({x, y, w});
        }

        sort(dsc.begin(), dsc.end(), [](auto a, auto b) -> bool {
            return get<2>(a) < get<2>(b);
        });

        Kruskal();

        cout << Sum << endl;
    }
}