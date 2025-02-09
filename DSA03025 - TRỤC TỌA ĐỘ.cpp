#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool cmp(pair<int, int> a, pair<int, int> b) {
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<pair<int, int>> a(n);
		for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
		sort(a.begin(), a.end(), cmp);
		int cnt = 1;
		int curTime = a[0].second;
		for(int i = 1; i < n; i++) {
			if(a[i].first >= curTime) {
				curTime = a[i].second;
				cnt++;	
			}
		}
		cout << cnt << endl;
	}
	return 0;
}