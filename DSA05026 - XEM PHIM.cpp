#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int C, N; cin >> C >> N;
	vector<int> a(N);
	for(int& x : a) cin >> x;
	
	vector<int> dp(C + 1, 0);
	dp[0] = 1;
    
	for(int x : a) {
		for(int i = C; i >= x; i--) {
			if(dp[i - x]) dp[i] = 1;
		}	
	}
	for(int i = C; i >= 0; i--) {
		if(dp[i]) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
