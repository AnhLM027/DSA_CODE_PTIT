#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		int maxSum = a[0];
		int curSum = 0;
		for(int i = 0; i < n; i++) {
			curSum += a[i];
			maxSum = max(maxSum, curSum);
			if(curSum < 0) curSum = 0;
		}
		cout << maxSum << endl;
	}
	return 0;
}