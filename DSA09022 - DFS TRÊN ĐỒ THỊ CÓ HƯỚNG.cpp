#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


vector<int> ke[1001];
bool visited[1001];
int V, E, u;

void DFS(int u) {
    cout << u << " ";
    visited[u] = true;
    for (auto i : ke[u]) {
        if (!visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        for (int i = 0; i < 1000; i++) ke[i].clear();
        memset(visited, false, sizeof(visited));
        cin >> V >> E >> u;
        for (int i = 0; i < E; i++) {
            int a, b; cin >> a >> b;
            ke[a].push_back(b);
        }
        DFS(u);
        cout << endl;
    }
}
