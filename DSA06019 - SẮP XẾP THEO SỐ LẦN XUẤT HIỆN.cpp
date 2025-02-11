#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> a(mp.begin(), mp.end());
        sort(a.begin(), a.end(), cmp);
        for(auto pi : a) {
            for(int i = 0; i < pi.second; i++) {
                cout << pi.first << " ";
            }
        }
        cout << endl;
	}
	return 0;
}
