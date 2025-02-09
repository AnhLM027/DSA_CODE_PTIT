#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, k; cin >> n >> k;
		vector<int> a(k + 1);
		for(int i = 1; i <= k; i++) {
			a[i] = i;
			cout << i;
		}
		cout << " ";
		while(true) {
			int i = k;
			while(i >= 0 && a[i] == n - k + i) i--;
			if(i < 1) break;
			else {
				a[i]++;
				for(int j = i + 1; j <= k; j++) {
					a[j] = a[i] + j - i;
				}
				for(int j = 1; j <= k; j++) cout << a[j];
			}
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}