#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


bool DFS(int u, int parent, vector<vector<int>>& dske, vector<bool>& vis,
            string& res, string s) {
	vis[u] = true;
	for(int v : dske[u]) {
		if(!vis[v]) {
			if(DFS(v, u, dske, vis, res, s + " " + to_string(v))) return true;
		}
		else if(v != parent && v == 1) {
            res = s;
            return true;
        }
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
        for(int i = 1; i <= V; i++) {
            sort(dske[i].begin(), dske[i].end());
        }

        string res = "";
		if(DFS(1, -1, dske, vis, res, "1")) cout << res << " " << 1 << endl;
		else cout << "NO" << endl;
	}
    return 0;
}