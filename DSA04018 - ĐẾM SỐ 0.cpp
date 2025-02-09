#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, x; cin >> n;
		int cnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> x;
            cnt += 1 - x;
        }
        cout << cnt << endl;
	}
	return 0;
}