#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n;

bool check(const vector<int>& a) {
	int l = 0, r = a.size() - 1;
	while(l < r) {
		if(a[l] != a[r]) return false;
		l++, r--;
	}
	return true;
}

void Try(int i, vector<int>& a) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			if(check(a)) {
				for(int& x : a) cout << x << " ";
				cout << endl;	
			}
			return;
		}
		else Try(i + 1, a);
	}
}

int main() {
	cin >> n;
	vector<int> a(n, 0);
	Try(0, a);
	return 0;
}