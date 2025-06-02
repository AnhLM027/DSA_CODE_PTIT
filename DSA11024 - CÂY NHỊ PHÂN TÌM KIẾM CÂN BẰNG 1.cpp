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
        
        sort(a.begin(), a.end());
        cout << a[(n - 1) / 2] << endl;
    }

    return 0;
}

