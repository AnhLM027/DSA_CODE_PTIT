#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005


int main() {
	int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;

        int ans = 0;
        for(int i = 0; i < n; i++) {
            int k = i;
            for(int j = i + 1; j < n; j++) {
                if(a[j] < a[k]) {
                    k = j;
                }
            }

            if(k != i) ans++;
            swap(a[i], a[k]);
        }

        cout << ans << endl;
    }
	return 0;
}