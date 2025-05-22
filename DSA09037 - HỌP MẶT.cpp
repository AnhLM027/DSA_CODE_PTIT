#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int k, n, m, a[1000];
bool vis[1001];
vector<int> dske[1001];

void DFS(int u) {
    vis[u] = true;
    for(int v : dske[u]) {
        if(!vis[v]) DFS(v);
    }
}

int main() {
    cin >> k >> n >> m;
    for(int i = 0; i < k; i++) cin >> a[i];
    
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        dske[x].push_back(y);
    }

    int ans = 0;
    
    for(int i = 1; i <= n; i++) {
        memset(vis, false, sizeof(vis));
        DFS(i);

        int cnt = 0;
        for(int i = 0; i < k; i++) cnt += vis[a[i]];
        if(cnt == k) ans++;
    }
    
    cout << ans << endl;
    return 0;
}       
