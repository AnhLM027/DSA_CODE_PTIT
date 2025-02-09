#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void Try(vector<int>& a, int n) {
	if(n == 0) return;
	vector<int> b(n - 1);
	cout << "[";
	for(int i = 0; i < a.size(); i++) {
		cout << a[i];
		if(i < n - 1) {
			b[i] = a[i] + a[i + 1];
			cout << " ";
		}
	}
	cout << "]" << endl;
	Try(b, n - 1);
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
    	int n; cin >> n;
    	vector<int> a(n);
    	for(int& x : a) cin >> x;
    	Try(a, n);
	}
    return 0;
}
