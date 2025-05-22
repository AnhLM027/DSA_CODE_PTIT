#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005

void DFS(vector<vector<int>>& dske, int u, vector<bool>& vis) {
	vis[u] = true;
	for(int t : dske[u]) {
		if(!vis[t]) DFS(dske, t, vis);
	}
}

int main() {
	int tc; cin >> tc;
    while(tc--) {
        int V, E; cin >> V >> E;
        
        vector<vector<int>> dske(V + 1);
        for(int i = 1; i <= E; i++) {
            int x, y; cin >> x >> y;
            dske[x].push_back(y);
        }

        bool check = true;
        for(int i = 1; i <= V; i++) {
            vector<bool> vis(V + 1, false);
            vis[0] = 1;

            DFS(dske, i, vis);

            if(vis != vector<bool>(V + 1, true)) {
                check = false;
                break;
            }
        }
        
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}