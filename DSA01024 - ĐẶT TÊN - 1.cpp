#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int n, k; cin >> n >> k;
	set<string> se;
	while(n--) {
		string s; cin >> s;
		se.insert(s);
	}
	n = se.size();
	vector<string> res(1);
	for(string s : se) res.push_back(s);
	
	vector<int> a(k + 1);
	for(int i = 1; i <= k; i++) a[i] = i;
	
	for(int j = 1; j <= k; j++) cout << res[a[j]] << " ";
	cout << endl;
	
	while(true) {	
		int i = k;
		while(i >= 0 && a[i] == n - k + i) i--;
		if(i < 1) break;
		else {
			a[i]++;
			for(int j = i + 1; j <= k; j++) {
				a[j] = a[i] + j - i;
			}
			for(int j = 1; j <= k; j++) cout << res[a[j]] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}