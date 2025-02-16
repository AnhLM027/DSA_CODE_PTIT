#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        queue<pair<int, int>> qe;
		qe.push({n, 0});
		int ans = 0;
		while(!qe.empty()) {
			auto [x, y] = qe.front(); qe.pop();
			ans = y;
			if(x == 1) break;
			if(x % 3 == 0) qe.push({x / 3, y + 1});
			if(x % 2 == 0) qe.push({x / 2, y + 1});
			if(x > 1) qe.push({x - 1, y + 1});
		}
		cout << ans << endl;
    }
	return 0;
}