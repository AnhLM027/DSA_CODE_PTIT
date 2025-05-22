#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
typedef long long ll;


void Floyd(int V, vector<vector<ll>>& a) {
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            for(int k = 1; k <= V; k++) {
                if(a[j][i] != LLONG_MAX && a[i][k] != LLONG_MAX) {
                    a[j][k] = min(a[j][k], a[j][i] + a[i][k]);
                }
            }
        }
    }
}

int main() {
    int V, E; cin >> V >> E;
    vector<vector<ll>> a(V + 1, vector<ll>(V + 1, LLONG_MAX));

    for(int i = 1; i <= V; i++) a[i][i] = 0;
    
    for(int i = 1; i <= E; i++) {
        ll x, y, w; cin >> x >> y >> w;
        a[x][y] = w;
        a[y][x] = w;
    }
    
    Floyd(V, a);

    int q; cin >> q;
    while(q--) {
        int x, y; cin >> x >> y;
        if(a[x][y] == LLONG_MAX) cout << "-1" << endl;
        else cout << a[x][y] << endl;
    }
    return 0;
}