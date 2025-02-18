#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


void Try(int i, int& n, int& k, int& s, int& cnt, int sz, int sum) {
	if(sz == k || sum >= s) {
		if(sum == s) cnt++;
		return;
	}
	for(int j = i + 1; j <= n; j++) {
		Try(j, n, k, s, cnt, sz + 1, sum + j);
	}
}

int main() {
	int n, k, s;
	while(cin >> n) {
		cin >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		int cnt = 0;
		Try(0, n, k, s, cnt, 0, 0);
		cout << cnt << endl;
	}
    return 0;
}