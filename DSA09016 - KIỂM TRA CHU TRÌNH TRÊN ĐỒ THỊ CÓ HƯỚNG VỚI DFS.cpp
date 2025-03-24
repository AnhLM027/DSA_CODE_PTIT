#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool DFS(int u, vector<vector<int>>& dske, vector<int>& trang_thai) {
    trang_thai[u] = 1;
    for(int v : dske[u]) {
        if(trang_thai[v] == 0) {
            if(DFS(v, dske, trang_thai)) return true;
        }
        else if(trang_thai[v] == 1) {
            return true;
        }
    }
    trang_thai[u] = 2;
    return false;
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int V, E; cin >> V >> E;
        vector<vector<int>> dske(V + 1);
        vector<int> trang_thai(V + 1, 0);
        for(int i = 0; i < E; i++) {
            int x, y; cin >> x >> y;
            dske[x].push_back(y);
        }
        bool check = false;
        for(int i = 1; i <= V; i++) {
            if(trang_thai[i] == 0) {
                if(DFS(i, dske, trang_thai)) {
                    check = true;
                    break;
                }
            }
        }
        cout << (check ? "YES" : "NO") << endl;
    }
    return 0;
}
