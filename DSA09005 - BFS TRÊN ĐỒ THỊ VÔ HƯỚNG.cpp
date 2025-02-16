#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


bool visited[1001];
vector<int> dske[1001];
int V, E, u, v;

void BFS(int a) {
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        cout << x << " ";
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
    while (tc--) {
        cin >> V >> E >> u;
        for (int i = 0; i < 1000; i++) dske[i].clear();
        for (int i = 0; i < E; i++) {
            int a, b; cin >> a >> b;
            dske[a].push_back(b);
            dske[b].push_back(a);
        }
        memset(visited, false, sizeof(visited));
        BFS(u);
        cout << endl;
    }
}