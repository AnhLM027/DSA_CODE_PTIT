#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int s, t; cin >> s >> t;
        queue<pair<int, int>> qe;
        qe.push({s, 0});
        unordered_set<int> se;
        int ans = 0;
        while(!qe.empty()) {
            auto& [top, cnt] = qe.front(); qe.pop();
            if(top == t) {
                ans = cnt;
                break;
            }
            if(se.count(top)) continue;
            se.insert(top);
            if(top > 1) qe.push({top - 1, cnt + 1});
            if(top < t) qe.push({top * 2, cnt + 1});
        }
        cout << ans << endl;
    }
    return 0;
}