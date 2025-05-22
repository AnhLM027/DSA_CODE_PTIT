#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
	
int main() {
    ll C[55][55] = {};

    for(int i = 1; i < 55; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i) C[i][j] = 1;
            else C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    
    int tc; cin >> tc;
    while(tc--) {
        int n, m; cin >> n >> m;
        cout << C[n + m + 1][n + 1] << endl;
    }
    return 0;
}       
