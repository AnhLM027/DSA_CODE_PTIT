#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define AnhLM027 "Lê Minh Anh"



int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;

        vector<int> b(n, INT_MIN);
        int min = INT_MAX;
        for(int i = n - 1; i >= 1; i--) {
            if(a[i] < min) min = a[i];
            b[i - 1] = min;
        }
        
        vector<int> res;
        int cur = a[0];

        for(int i = 0; i < n; i++) {
            cur = max(cur, a[i]);
            if(cur <= b[i]) res.push_back(i + 1);
        }
        cout << res.size() << endl;
        for(int x : res) cout << x << " ";
        cout << endl;
    }

    return 0;
}

