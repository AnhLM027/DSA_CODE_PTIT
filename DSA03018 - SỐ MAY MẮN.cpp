#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int sumDigit(string n) {
	int res = 0;
	for(char c : n) res += c - '0';
	return res;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		
		int cnt = 0;
		int ans = -1;
		while(cnt * 4 <= n) {
			if((n - cnt * 4) % 7 == 0) {
				ans = cnt;
				break;
			}
			else cnt++;
		}
		if(ans == -1) cout << ans << endl;
		else {
			for(int i = 0; i < cnt; i++) cout << 4;
			for(int i = 0; i < (n - cnt * 4) / 7; i++) cout << 7;
			cout << endl;
		}
	}

	return 0;
}