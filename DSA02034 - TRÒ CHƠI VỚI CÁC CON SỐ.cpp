#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool sinhHv(vector<int>& b, int n) {
	int i = n - 2;
	while(i >= 0 && b[i] > b[i + 1]) i--;
	if(i < 0) return false;
	else {
		int j = n - 1;
		while(b[i] > b[j]) j--;
		swap(b[i], b[j]);
		reverse(b.begin() + i + 1, b.end());
		return true;
	}
}

bool check(vector<int> a, vector<int> b) {
	for(int i = 1; i < a.size(); i++) {
		if(abs(a[b[i - 1]] - a[b[i]]) == 1) return false;
	}
	return true;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(int i = 1; i <= n; i++) a[i - 1] = i;
		vector<int> b(n);
		for(int i = 0; i < n; i++) b[i] = i;
		while(true) {
			if(check(a, b)) {
				for(int i = 0; i < n; i++) cout << a[b[i]];
				cout << endl;
			}
			
			if(!sinhHv(b, n)) break;
		}
		cout << endl;
	}
	
	return 0;
}