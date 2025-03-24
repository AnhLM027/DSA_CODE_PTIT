#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n, s, m; cin >> n >> s >> m;
        int lt = 0;
        int cnt = 0;
        bool ok = true;
        for(int i = 1; i <= s; i++) {
            if(i % 7 != 0) {
				lt += n;
				cnt++;
			}
			lt -= m;
            if(lt < 0) {
				ok = false;
				break;
			}
        }
        if(ok) cout << cnt - lt / n << endl;
        else cout << "-1" << endl;
    }
    return 0;
}