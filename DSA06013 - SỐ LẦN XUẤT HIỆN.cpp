#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, X; cin >> n >> X;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x == X) cnt++;
        }
        if(cnt == 0) cout << "-1" << endl;
        else cout << cnt << endl;
	}
	return 0;
}