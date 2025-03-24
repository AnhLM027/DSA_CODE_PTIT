#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int i, j; cin >> i >> j;
	cout << (ll)(i + j - 1) * (i + j) / 2 - i + 1 << endl;
	
	ll val; cin >> val;
	ll u = (ll)(-1 + (int)sqrt(8 * val - 7)) / 2 + 1;
	ll first_val = u * (u + 1) / 2;
	
	i = first_val - val + 1;
	j = u - i + 1;
	cout << i << " " << j;
    return 0;
}