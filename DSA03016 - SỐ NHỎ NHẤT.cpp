#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int s, d; cin >> s >> d;
		if (s > 9 * d || s == 0 && d > 1) {
			cout << "-1" << endl;
			continue;
		}
		int tmp = s;
		string minn = "";
		while (tmp) {
			if (tmp >= 9) {
				minn.push_back('9'); tmp -= 9;
			}
			else {
				minn.push_back(tmp + '0'); tmp = 0;
			}
		}
		if (minn.length() < d) {
			minn[minn.length() - 1] -= 1;
			while (minn.length() < d - 1) minn.push_back('0');
			minn.push_back('1');
		}
		reverse(minn.begin(), minn.end());
		cout << minn << endl;
	}
	return 0;
}