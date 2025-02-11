#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
        int ok = -1;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x == k) ok = 1;
        }
        cout << ok << endl;
	}
	return 0;
}
