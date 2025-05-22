#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005

int V, E, st; 
vector<int> dske[maxn];
bool vis[maxn];

void DFS(int u, vector<pair<int, int>>& res) {
    vis[u] = true;

    for(int v : dske[u]) {
        if(!vis[v]) {
            res.push_back({u, v});
            DFS(v, res);
        }
    }
}

int main() {
	int tc; cin >> tc;
    while(tc--) {
        cin >> V >> E >> st;
        
        for(int i = 1; i <= V; i++) dske[i].clear();
        
        for(int i = 1; i <= E; i++) {
            int x, y; cin >> x >> y;
            dske[x].push_back(y);
            dske[y].push_back(x);
        }

        memset(vis, false, sizeof(vis));
        vector<pair<int, int>> res;
        DFS(st, res);

        if(res.size() == V - 1) {
            for(auto [x, y] : res) cout << x << " " << y << endl;
        }
        else cout << "-1" << endl;
    }
}