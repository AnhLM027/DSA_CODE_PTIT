#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool sinhHoanVi(vector<int>& b, int n) {
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

int main() {
	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;
		vector<char> a;
		for(char c : s) a.push_back(c);
		int n = a.size();
		vector<int> b(n);
		for(int i = 0; i < n; i++) b[i] = i;
		while(true) {
			for(int i = 0; i < n; i++) {
				cout << a[b[i]];
			}
			cout << " ";
			if(!sinhHoanVi(b, n)) break;
		}
		cout << endl;
	}
	return 0;
}
