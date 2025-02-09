#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define MOD (int)(1e9 + 7)

int main() {
	ll C[1001][1001] = {0};
	for(int i = 0; i <= 1000; i++) {
		for(int j = 0; j <= i; j++) {
			if(j == 0 || j == i) C[i][j] = 1;
			else C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % MOD;
		}
	}
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
		cout << C[n][k] << endl;
	}
	return 0;
}
