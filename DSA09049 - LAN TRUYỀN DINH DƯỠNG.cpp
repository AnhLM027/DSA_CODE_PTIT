#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n; 
vector<vector<int>> dske(200001);
vector<ll> dp(200001, 0);
vector<ll> M(200001, 0);

ll DFS(int u) {
    ll sum = 1;
    for(int v : dske[u]) sum += DFS(v);
    dp[u] = sum;
    return sum;
}

ll DFS2(int u) {
    ll sum = 1;
    for(int v : dske[u]) sum += DFS2(v) + dp[v];
    M[u] = sum;
    return sum;
}

int main() {
    cin >> n;
    
    for(int i = 2; i <= n; i++) {
        int j; cin >> j;
        dske[j].push_back(i);
    }
    
    DFS(1);
    DFS2(1);

    for(int i = 1; i <= n; i++) cout << M[i] << " ";
    return 0;
}       
