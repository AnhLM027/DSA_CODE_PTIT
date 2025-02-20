#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int k; cin >> k;
		string s; cin >> s;
		priority_queue<int> pq;
		int cnt[26] = {};
		for(char c : s) cnt[c - 'A']++;
		for(int x : cnt) {
			if(x > 0) pq.push(x);
		}
		while(k--) {
			int top = pq.top(); pq.pop();
			pq.push(top - 1);
		}
		int ans = 0;
		while(!pq.empty()) {
			int num = pq.top(); pq.pop();
			ans += num * num;
		}
		cout << ans << endl;
	}
	return 0;
}