#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        int min1 = INT_MAX, min2 = INT_MAX;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x < min1) {
                min2 = min1;
                min1 = x;
            }
            else if(x < min2 && x != min1) min2 = x;
        }
        if(min2 != INT_MAX) cout << min1 << " " << min2 << endl;
        else cout << "-1" << endl;
	}
	return 0;
}
