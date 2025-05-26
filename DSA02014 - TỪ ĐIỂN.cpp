#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105


int k, n, m;
vector<string> a, res;
char ch[3][3] = {};
bool vis[3][3] = {};

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void DFS(int x, int y, string s, unordered_map<string, string>& mp) {
	for(string t : a) {
		if(s == t) res.push_back(s);
	}

	for(int i = 0; i < 8; i++) {
		int x1 = x + dx[i];
		int y1 = y + dy[i];
		if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && !vis[x1][y1]) {
			vis[x1][y1] = true;
			DFS(x1, y1, s + string(1, ch[x1][y1]), mp);
			vis[x1][y1] = false;
		}
	}
}

int main() {
    int tc; cin >> tc;
	while(tc--) {
		a.clear();
		res.clear();
		
		cin >> k >> n >> m;
		
		unordered_map<string, string> mp;
		for(int i = 0; i < k; i++) {
			string s; cin >> s;
			a.push_back(s);
		}

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) cin >> ch[i][j];
		}

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				memset(vis, false, sizeof(vis));
				vis[i][j] = true;
				DFS(i, j, string(1, ch[i][j]), mp);
			}
		}
		
		if(res.empty()) cout << "-1" << endl;
		else {
			for(string s : res) cout << s << " ";
			cout << endl;
		}
	}
	return 0;
}