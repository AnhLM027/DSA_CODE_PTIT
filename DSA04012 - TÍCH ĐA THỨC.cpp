#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(int& x : a) cin >> x;
        for(int& x : b) cin >> x;
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                mp[i + j] += a[i] * b[j];
            }
        }
        for(auto [x, y] : mp) cout << y << " ";
        cout << endl;
    }
    return 0;
}