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

		sort(a.begin(), a.end());

		int i = n / 2, j = n - 1;
		int cnt = 0;
		while(i >= 0 && j >= n / 2) {
			if(a[i] * 2 <= a[j]) {
				i--, j--, cnt++;
			}
			else i--;
		}

		cout << n - cnt << endl;
    }
	return 0;
}