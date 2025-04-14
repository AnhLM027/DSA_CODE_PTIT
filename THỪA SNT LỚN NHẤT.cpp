#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(100000));


vector<int> Prime(LIMIT);
void Sang() {
	for (int i = 2; i <= LIMIT; i++) Prime[i] = i;
	for(int i = 2; i <= sqrt(LIMIT); i++) {
		if(Prime[i] == i) {
			for(int j = i * i; j <= LIMIT; j += i) {
				Prime[j] = i;
			}
		}
	}
	for(int i = 2; i <= LIMIT; i++) {
        if(Prime[i] == i) continue;
        int max1 = i / Prime[i];
        Prime[i] = max(Prime[i], Prime[max1]);
    }
}

int main() {
	Sang();
	
	vector<ll> Prefix(LIMIT);
	for(int i = 1; i <= LIMIT; i++) {
		Prefix[i] = Prefix[i - 1] + Prime[i];
		//cout << i << " " << Prefix[i] << endl;
	}

	int tc; cin >> tc;
	while(tc--) {
		int l, r; cin >> l >> r;
		cout << Prefix[r] - Prefix[l - 1] << endl;
	}
}