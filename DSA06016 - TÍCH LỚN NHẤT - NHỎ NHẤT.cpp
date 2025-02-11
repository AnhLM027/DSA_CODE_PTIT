#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, m, x; cin >> n >> m;
        int minNum = INT_MAX;
        int maxNum = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> x;
            maxNum = max(maxNum, x);
        }
        for(int i = 0; i < n; i++) {
            cin >> x;
            minNum = min(minNum, x);
        }
        cout << (long long)minNum * maxNum << endl;
	}
	return 0;
}
