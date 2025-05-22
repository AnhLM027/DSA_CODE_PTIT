#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

int main() {
	int tc; cin >> tc;
	while(tc--) {
		ll tu, mau; cin >> tu >> mau;
		
		vector<ll> ans;

		while(tu != 0) {
			ll x = (mau + tu - 1) / tu;
			ans.push_back(x);

			tu = tu * x - mau;
			mau = mau * x;

			int gcd = __gcd(tu, mau);
			tu /= gcd;
			mau /= gcd;
		}
		
		for(int i = 0; i < ans.size(); i++){
            if(i) cout << " + ";
            cout << "1/" << ans[i];
        }
		cout << endl;
	}
	return 0;
}