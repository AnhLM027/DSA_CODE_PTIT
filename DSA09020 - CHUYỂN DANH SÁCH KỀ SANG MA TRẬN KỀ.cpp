#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int n; cin >> n;
	cin.ignore();
	vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
	for(int i = 1; i <= n; i++) {
		string s, t;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> t) {
			int y = stoi(t);
			a[i][y] = a[y][i] = 1;
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}