#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"

#define LIMIT (int)1e6
vector<bool> isPrime(LIMIT + 1, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i <= sqrt(LIMIT); i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
	int tc; cin >> tc;
	while(tc--) {
		int M; cin >> M;
        bool ok = false;
        for(int i = 2; i < M; i++) {
            if(isPrime[i] && isPrime[M - i]) {
                cout << i << " " << M - i << endl;
                ok = true;
                break;
            }
        }
        if(!ok) cout << "-1" << endl;
	}
	return 0;
}
