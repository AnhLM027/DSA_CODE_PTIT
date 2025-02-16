#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		ll n, k; cin >> n >> k;
		int cnt = 1;
        while(k % 2 == 0) {
            cnt++;
            k /= 2;
        }
        cout << (char)('A' + cnt - 1) << endl;
	}
}