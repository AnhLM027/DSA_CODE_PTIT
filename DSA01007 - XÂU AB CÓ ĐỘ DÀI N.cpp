#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n;

void Try(int i, vector<int>& a) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			for(int& x : a) {
				if(!x) cout << 'A';
				else cout << 'B';	
			}
			cout << " ";
			return;
		}
		else Try(i + 1, a);
	}
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		cin >> n;
		vector<int> a(n, 0);
		Try(0, a);
		cout << endl;
	}
	return 0;
}