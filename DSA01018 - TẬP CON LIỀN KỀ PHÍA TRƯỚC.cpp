#include <bits/stdc++.h>
using namespace std;

#define AnhLM027 "Lê Minh Anh"


void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(k + 1, 0);
    for(int j = 1; j <= k; j++) cin >> a[j];
    int i = k;
    while(i >= 1 && a[i] == a[i - 1] + 1) i--;
    if(i == 0) {
        for(int j = n - k + 1; j <= n; j++) cout << j << " ";
    }
    else {
        a[i]--;
        for (int j = i + 1; j <= k; j++) a[j] = n - k + j;
        for (int j = 1; j <= k; j++) cout << a[j] << " ";
    }
    cout << endl;
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}
