#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define AnhLM027 "Lê Minh Anh"
#define MOD (int)(1e9 + 7)

int V, E;
int a[1005][1005] = {};

bool BFS(int u, vector<int> dske[]) {
    vector<bool> vis(V + 1, false);
    vis[u] = true;
    
    queue<pair<int, int>> qe;
    qe.push({u, 0});
    
    while(!qe.empty()) {
        auto [v, w] = qe.front(); qe.pop();
        vis[v] = true;

        for(int t : dske[v]) {
            if(!vis[t]) {
                qe.push({t, w + a[v][t]});
            }
            else if(t == u && w + a[v][u] < 0) return true;
        }
    }

    return false;
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        cin >> V >> E;
        vector<int> dske[V + 1];

        for(int i = 0; i < E; i++) {
            int x, y, w; cin >> x >> y >> w;
            dske[x].push_back(y);
            a[x][y] = w;
        }
        
        bool check = false;
        for(int i = 1; i <= V; i++) {
            check = check || BFS(i, dske);
            if(check) break;
        }
        cout << check << endl;
    }

    return 0;
}

