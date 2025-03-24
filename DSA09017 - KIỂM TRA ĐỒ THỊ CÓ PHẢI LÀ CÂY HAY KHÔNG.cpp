#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		set<int> se;
		for(int i = 0; i < n - 1; i++){
			int x, y; cin>> x >> y;
			se.insert(x);
			se.insert(y);
		}
		if(se.size() == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}