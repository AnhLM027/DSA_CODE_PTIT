#include<iostream>
using namespace std;
typedef long long ll;
ll MOD = 1e15 + 7;
ll M[5] = { 1,3,6,12,23 };

/*
 - Sn: T?ng t? T1 - Tn
 - Sn = T1 + T2 + T3 + ... + Tn
 - 		3 * Sn = T1 + T2 + T3 + T4 + ... + Tn-1 + Tn
				    + T1 + T2 + T3 + ... + Tn-2 + Tn-1 + Tn
				    + T0 + T1 + T2 + ... + Tn-3 + Tn-2 + Tn-1 + Tn
	 -> 3 * Sn = T1 + T3 + T4 + T5 + ... + Tn   + Tn+1 + Tn + Tn-1 + Tn
	 -> 3 * Sn = Sn - T2 + Tn+2 + Tn
	 ( T2 = 2 ) --> Sn = ( Tn+2 + Tn ) / 2 - 1 
*/

struct matran {
    ll f[3][3] = {
        {1,1,1},
        {1,0,0},
        {0,1,0},
    };
};

ll Mul(ll a, ll b) {
    if (b <= 1)return a % MOD * b;
    ll tmp = Mul(a, b / 2);
    if (b % 2 == 0)return tmp % MOD + tmp % MOD;
    else return tmp % MOD + tmp % MOD + a % MOD;
}

matran operator*(matran A, matran B) {
    matran C;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C.f[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C.f[i][j] = (C.f[i][j] % MOD + Mul(A.f[i][k], B.f[k][j]) % MOD) % MOD;
            }
        }
    }
    return C;
}

matran Pow(matran X, ll k) {
    if (k == 1) return X;
    matran tmp = Pow(X, k / 2);
    if (k % 2 == 0) return tmp * tmp;
    else return tmp * tmp * X;
}

ll Tribonacci(ll n) {
    if (n <= 3) return M[n - 1];
    matran X;
    matran S = Pow(X, n + 2);
    return S.f[1][0] - 1;
}

int main() {
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << Tribonacci(n) << endl;
    }
}