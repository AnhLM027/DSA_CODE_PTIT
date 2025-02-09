#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		ll n, k; cin >> n >> k;
		if (k & 1) cout << "1" << endl;
		else {
			int cnt = 1;
			while (k % 2 == 0) {
				k /= 2;
				cnt++;
			}
			cout << cnt << endl;
		}
	}
	return 0;
}