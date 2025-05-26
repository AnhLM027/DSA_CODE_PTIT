#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


bool snt(int n) {
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return false;
	}
	return true;
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
		string s, t; cin >> s >> t;
		
		int ans = INT_MAX;
		queue<pair<string, int>> qe;
		qe.push({s, 0});
		
		unordered_map<string, bool> mp;
		mp[s] = true;
		
		while(!qe.empty()) {
			auto [st, cnt] = qe.front(); qe.pop();
			if(st == t) {
				ans = min(ans, cnt);
				continue;
			}

			for(int i = 0; i < 4; i++) {
				string tmp = st;
				for(int j = '0'; j <= '9'; j++) {
					if(i == 0 && j == '0' || i == 3 && (j - '0') % 2 == 0) continue;
					tmp[i] = j;
					if(!mp[tmp] && snt(stoi(tmp))) {
						qe.push({tmp, cnt + 1});
						mp[tmp] = true;
					} 
				}
			}
		}
		cout << ans << endl;
    }
	return 0;
}