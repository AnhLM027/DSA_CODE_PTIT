#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) cin >> a[i][j];
        }
        queue<pair<pair<int, int>, int>> qe;
        qe.push({{0, 0}, 0});
        int ans = -1;
        while(!qe.empty()) {
            pair<pair<int, int>, int> top = qe.front(); qe.pop();
            auto [x, y] = top.first;
            int cnt = top.second;
            if(x == n - 1 && y == m - 1) {
                ans = cnt;
                break;
            }
            visited[x][y] = true;
            int x1 = x + a[x][y];
            if(x1 >= 0 && x1 < n && !visited[x1][y]) qe.push({{x1, y}, cnt + 1});
            int y1 = y + a[x][y];
            if(y1 >= 0 && y1 < m && !visited[x][y1]) qe.push({{x, y1}, cnt + 1});
        }
        cout << ans << endl;
    }
	return 0;
}