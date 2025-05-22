#include <bits/stdc++.h>
using namespace std;

#define ll long long


	
int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        vector<int> a(n);
        for (int& x : a) cin >> x;
        
        set<int> se(a.begin(), a.end());
        vector<int> b(se.begin(), se.end());

        if(a == b) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}