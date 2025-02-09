#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main(){
	int tc; cin >> tc;
	while(tc--) {
		int N; cin >> N;
		vector<int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		vector<int> dp(N + 1);
		for(int& x : a) dp[x] = 1;
		dp[0] = 1;
		for(int i = 1; i <= N; i++) {
			for(int x : a) {
				if(x > i) continue;
				if(!dp[i]) dp[i] = dp[i - x] + 1;
				else dp[i] = min(dp[i], dp[i - x] + 1);
			}	
		}
		cout << dp[N] << endl;
	}
	return 0;
}