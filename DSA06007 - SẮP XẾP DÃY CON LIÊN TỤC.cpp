#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<int> a(n), b;
        for(int& x : a) cin >> x;
        b = a;
        sort(b.begin(), b.end());
        int l = 0, r = n - 1;
        while(a[l] == b[l]) l++;
        while(a[r] == b[r]) r--;
        cout << l + 1 << " " << r + 1 << endl;
    }
	return 0;
}