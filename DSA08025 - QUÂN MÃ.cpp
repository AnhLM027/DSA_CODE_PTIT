#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

int dx[8] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[8] = {-1, 1, 2, 2, 1, -1, -2, -2};


int main() {
    int tc; cin >> tc;
    while (tc--) {
        string s, t; cin >> s >> t;
        int x1 = s[0] - 'a', y1 = 8 - (s[1] - '0');
        int x2 = t[0] - 'a', y2 = 8 - (t[1] - '0');
        int ans = 0;
        queue<pair<pair<int, int>, int>> qe;
        qe.push({{x1, y1}, 0});
        set<pair<int, int>> se;
        while(!qe.empty()) {
            auto [tdo, cnt] = qe.front(); qe.pop();
            auto [x, y] = tdo;
            if(x == x2 && y == y2) {
                ans = cnt;
                break;
            }
            if(se.count(tdo)) continue;
            se.insert(tdo);
            for(int i = 0; i < 8; i++) {
                int u = x + dx[i];
                int v = y + dy[i];
                if(u >= 0 && u < 8 && v >= 0 && v < 8) {
                    qe.push({{u, v}, cnt + 1});
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}