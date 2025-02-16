#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,1,-1,0 };
string s = "";
string path = "URLD";
bool check;

void Try(int i, int j, vector<string>& res, int n, int a[][20]) {
	if (i == n && j == n) {
		check = true;
		res.push_back(s);
	}
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]) {
			a[i][j] = 0;
			s += path[k];
			Try(i1, j1, res, n, a);
			a[i][j] = 1;
			s.pop_back();
		}
	}
}
void solve() {
	int n; cin >> n;
	int a[20][20];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) cin >> a[i][j];
	}
	vector<string> res;
	if (a[1][1] == 1) {
		a[1][1] = 0;
		Try(1, 1, res, n, a);
        if(res.size() == 0) {
            cout << "-1" << endl;
            return;
        }
		sort(res.begin(), res.end());
		for (int i = 0; i < res.size(); i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "-1" << endl;
		return;
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		check = false;
		solve();
	}
	return 0;
}