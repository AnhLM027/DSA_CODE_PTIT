#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        int r = n - 1;
        while(k--) {
            cout << a[r--] << " ";
        }
        cout << endl;
	}
	return 0;
}
