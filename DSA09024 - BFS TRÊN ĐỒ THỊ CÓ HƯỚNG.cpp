#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


vector<int> ke[1001];
bool visited[1001];
int V, E, u;

void BFS(int u) {
    queue<int> qe;
    qe.push(u);
    visited[u] = true;
    while (!qe.empty()) {
        int x = qe.front(); qe.pop();
        cout << x << " ";
        for (int i : ke[x]) {
            if (!visited[i]) {
                qe.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        cin >> V >> E >> u;
        for (int i = 0; i < 1000; i++) ke[i].clear();
        for (int i = 0; i < E; i++) {
            int a, b; cin >> a >> b;
            ke[a].push_back(b);
        }
        memset(visited, false, sizeof(visited));
        BFS(u);
        cout << endl;
    }
}