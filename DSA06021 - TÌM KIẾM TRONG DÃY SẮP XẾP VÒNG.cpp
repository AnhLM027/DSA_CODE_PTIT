#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
        int ind = -1;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x == k) ind = i + 1;
        }
        cout << ind << endl;
	}
	return 0;
}
