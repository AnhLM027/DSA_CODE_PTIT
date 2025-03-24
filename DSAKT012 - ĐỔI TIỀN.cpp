#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


void Try(int i, vector<int>& a, int Sum, int cnt, int& ans) {
	if(Sum <= 0) {
		if(Sum == 0) ans = min(ans, cnt);
		return;
	}
	
	for(int j = i + 1; j < a.size(); j++) {
		Try(j, a, Sum - a[j], cnt + 1, ans);
	}
}

int main() {
	int n, S; cin >> n >> S;
	vector<int> a(n);
	for(int& x : a) cin >> x;
	sort(a.begin(), a.end(), greater<>());
	int ans = INT_MAX;
	Try(-1, a, S, 0, ans);
	if(ans == INT_MAX) cout << -1 << endl;
	else cout << ans << endl;
    return 0;
}