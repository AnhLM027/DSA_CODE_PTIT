#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105



int a[maxn];
int ans;

void DFS(int S, int i, int cnt, int n) {
	if(S <= 0) {
		if(S == 0) ans = min(ans, cnt);
		return;
	}
	if(ans != INT_MAX) return;

	for(int j = i + 1; j < n; j++) {
		DFS(S - a[j], j, cnt + 1, n);
	}
}


int main() {
    int tc; cin >> tc;
	while(tc--) {
		int n, S; cin >> n >> S;
		for(int i = 0; i < n; i++) cin >> a[i];

		sort(a, a + n,greater<>());
		
		ans = INT_MAX;
		DFS(S, -1, 0, n);
		if(ans == INT_MAX) cout << "-1" << endl;
		else cout << ans << endl;
	}
	return 0;
}