#include <bits/stdc++.h>
using namespace std;

#define ll long long


void DFS(int u, vector<int> path, vector<vector<int>>& dske, vector<vector<int>>& res) {
    if(dske[u].size() == 0) {
        res.push_back(path);
        return;
    }

    for(int v : dske[u]) {
        path.push_back(v);
        DFS(v, path, dske, res);
        path.pop_back();
    }
}
	
int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        vector<vector<int>> dske(n + 1);
        for(int i = 1; i <= n - 1; i++) {
            int x, y; cin >> x >> y;
            dske[x].push_back(y);
        }
        
        vector<vector<int>> res;
        DFS(1, {1}, dske, res);

        sort(res.begin(), res.end(), [](auto v, auto t) -> bool {
            return v[v.size() - 1] < t[t.size() - 1];
        });

        for(auto v : res) {
            for(int x : v) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}