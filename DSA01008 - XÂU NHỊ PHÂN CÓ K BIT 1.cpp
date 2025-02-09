#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n, k;

void Try(int i, vector<int>& a, int cnt) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			if(cnt != k) return;	
			for(int& x : a) cout << x;
			cout << endl;
			return;
		}
		else Try(i + 1, a, cnt + j);
	}
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		cin >> n >> k;
		vector<int> a(n, 0);
		Try(0, a, 0);
	}
	return 0;
}