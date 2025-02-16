#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


vector<int> ke[1001];
bool visited[1001];
string res;
int V, E, u, v;
int ok;

void BFS(int a, string s) {
    queue<pair<int,string>> q;
    q.push({u,s});
    visited[u] = true;
    while (!q.empty()) {
        int x = q.front().first;
        string tmp = q.front().second; q.pop();
        if (x == v) res = tmp, ok = 0;
        for (int i : ke[x]) {
            if (!visited[i]) {
                q.push({ i,tmp + " " + to_string(i) });
                visited[i] = true;
            }
        }
    }
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        cin >> V >> E >> u >> v;
        for (int i = 0; i < 1000; i++) ke[i].clear();
        for (int i = 0; i < E; i++) {
            int a, b; cin >> a >> b;
            ke[a].push_back(b);
        }
        ok = 1;
        memset(visited, false, sizeof(visited));
        BFS(u,to_string(u));
        if (ok) cout << "-1\n";
        else cout << res << endl;
    }
}