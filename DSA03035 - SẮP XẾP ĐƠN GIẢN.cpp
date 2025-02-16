#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    vector<int> dp(n + 1, 0);
    for(int x : a) dp[x] = dp[x - 1] + 1;
    cout << n - *max_element(dp.begin(), dp.end());
	return 0;
}