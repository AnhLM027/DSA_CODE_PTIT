#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		int cnt = 1;
		while(prev_permutation(a.begin(), a.end())) cnt++;
		cout << cnt << endl;
    }
    return 0;
}