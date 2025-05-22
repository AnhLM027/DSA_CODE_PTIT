#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005


int main() {
    vector<int> res(1, 0);
    queue<int> qe;
    for(int i = 1; i <= 5; i++) qe.push(i);

    while(!qe.empty()) {
        int x = qe.front(); qe.pop();
        res.push_back(x);

        if(x > 1e5) continue;
        vector<bool> vis(6, false);
        string t = to_string(x);
        for(char c : t) vis[c - '0'] = true;

        for(int i = 0; i <= 5; i++) {
            if(!vis[i]) qe.push(x * 10 + i);
        }
    }
    
	int tc; cin >> tc;
    while(tc--) {
        int l, r; cin >> l >> r;
        auto it1 = lower_bound(res.begin(), res.end(), l);
        auto it2 = lower_bound(res.begin(), res.end(), r + 1);
        cout << it2 - it1 << endl;
    }
	return 0;
}