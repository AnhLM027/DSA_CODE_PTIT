#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(100000));



int main() {
	int tc; cin >> tc;
	while(tc--) {
		int a, b, c; cin >> a >> b >> c;
		double denta = -3 * a * b;
		double k = (27 * a * a * c) / (2 * sqrt(pow(abs(denta), 3)));
		cout << fixed << setprecision(4) << sqrt(abs(denta)) * (cbrt(k + sqrt(k * k + 1)) + cbrt(k - sqrt(k * k + 1))) / (3 * a) << endl;
	}
	return 0;
}