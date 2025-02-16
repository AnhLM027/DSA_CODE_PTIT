#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int n; cin >> n;
	cin.ignore();
	set<pair<int, int>> dske;
	for(int i = 1; i <= n; i++) {
		string s, t;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> t) {
			int y = stoi(t);
			dske.insert({min(i, y), max(i, y)});
		}
	}
	for(auto [x, y] : dske) {
		cout << x << " " << y << endl;
	}
	return 0;
}