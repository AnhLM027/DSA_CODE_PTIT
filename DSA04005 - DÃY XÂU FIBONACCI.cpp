#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll F[100] = { 0 };

char findChar(ll n, ll k) {
	if (n == 1) return 'A';
	if (n == 2) return 'B';
	if (k <= F[n - 2]) return findChar(n - 2, k);
	else return findChar(n - 1, k - F[n - 2]);
}

int main() {
	F[1] = F[2] = 1;
	for (int i = 3; i <= 92; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
	int t; cin >> t;
	while(t--) {
		ll n, k; cin >> n >> k;
		cout << findChar(n, k) << endl;
	}
}