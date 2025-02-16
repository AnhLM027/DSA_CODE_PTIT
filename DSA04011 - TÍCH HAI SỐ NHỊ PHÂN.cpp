#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
    while(tc--) {
		string a, b; cin >> a >> b;
		ll num1 = 0, num2 = 0;
		for(int i = a.size() - 1; i >= 0; i--) {
			num1 += (a[i] - '0') << (a.size() - i - 1);
		}
		for(int i = b.size() - 1; i >= 0; i--) {
			num2 += (b[i] - '0') << (b.size() - i - 1);
		}
		cout << num1 * num2 << endl;
    }
	return 0;
}