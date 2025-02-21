#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


void BFS(vector<int> dske[], int u, vector<bool>& visited) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        for (int i : dske[x]) {
            if (!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int V, E; cin >> V >> E;
        vector<bool> vis(V + 10);
        vector<int> dske[V + 10];
        for(int i = 1; i <= E; i++) {
            int x, y; cin >> x >> y;
            dske[x].push_back(y);
            dske[y].push_back(x);
        }
		int cnt = 0;
        for(int i = 1; i <= V; i++) {
            if(vis[i]) continue;
            BFS(dske, i, vis);
            cnt++;
        }
		cout << cnt << endl;
	}
	return 0;
}