#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
	
int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<vector<int>> dske(n + 1);
        for(int i = 0; i < n - 1; i++) {
            int x, y; cin >> x >> y;
            dske[x].push_back(y);
        }
        
        queue<pair<int, int>> qe;
        qe.push({1, 0});

        int ans = 0;
        while(!qe.empty()) {
            auto [u, h] = qe.front(); qe.pop();

            ans = max(ans, h);
            for(int v : dske[u]) qe.push({v, h + 1});
        }

        cout << ans << endl; 
    }
    return 0;
}       
