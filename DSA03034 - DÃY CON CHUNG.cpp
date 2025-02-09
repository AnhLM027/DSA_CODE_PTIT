#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, m, k; cin >> n >> m >> k;
		vector<int> a(n), b(m), c(k);
		map<int, int> mp1, mp2, mp3;
		for(int& x : a) {
			cin >> x;
			mp1[x]++;
		}
		for(int& x : b) {
			cin >> x;
			if(mp1[x]) {
				mp2[x]++;
				mp1[x]--;
			}
		}
		for(int& x : c) {
			cin >> x;
			if(mp2[x]) {
				mp3[x]++;
				mp2[x]--;
			}
		}
		if(mp3.size() == 0) cout << "NO";
		else {
			for(auto& [x, y] : mp3) {
				for(int i = 1; i <= y; i++) cout << x << " ";
			}
		}
		cout << endl;
	}
	return 0;
}