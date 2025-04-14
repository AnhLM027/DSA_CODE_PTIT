#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

int main() {
    int n, X; cin >> n >> X;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    vector<int> dp(1000, INT_MAX);
    int parent[500];
    parent[0] = 0;
    dp[0] = 0;
    for(int i = 0; i <= X; i++) {
        for(int j = 0; j < n; j++) {
            if(dp[i] != INT_MAX) {
                if(dp[i + a[j]] > dp[i] + 1) {
                    dp[i + a[j]] = dp[i] + 1;
                    parent[i + a[j]] = i;
                }
            }
        }
    }
    cout << dp[X] << endl;
    vector<int> path;
    int u = X;
    while(1) {
        path.push_back(u);
        if(!u) break;
        u = parent[u];
    }
    reverse(path.begin(), path.end());
    for(int i = 1; i < path.size(); i++) cout << path[i] - path[i - 1] << " ";
}