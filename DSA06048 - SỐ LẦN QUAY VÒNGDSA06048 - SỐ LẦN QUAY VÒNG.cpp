#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc = 1; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        vector<ll> a(n);
        int ind = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > a[ind]) ind = i;
        }
        if(ind == n - 1) ind = -1;
        cout << ind + 1<< endl;
	}
	return 0;
}