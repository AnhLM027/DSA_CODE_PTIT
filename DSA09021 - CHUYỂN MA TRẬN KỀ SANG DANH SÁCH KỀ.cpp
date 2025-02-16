#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int n; cin >> n;
	vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
	set<int> dske[1001];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if(a[i][j]) {
				dske[i].insert(j);
				dske[j].insert(i);
			}
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int x : dske[i]) cout << x << " ";
		cout << endl;
	}
	
	return 0;
}