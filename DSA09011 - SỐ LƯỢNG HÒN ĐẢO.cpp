#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0},
                            {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
int n, m;

bool isValid(int x, int y) {
	return x >= 0 && x < n && y >= 0 && y < m;
}


void DFS(vector<vector<int>>& a, int x, int y) {
	a[x][y] = 0;
	for(auto& v : dir) {
		int x1 = x + v[0], y1 = y + v[1];
		if(isValid(x1, y1) && a[x1][y1]) {
			DFS(a, x1, y1);
		}
	}
}

int main() {
    int tc; cin >> tc;
    while(tc--) {
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for(auto& v : a) {
            for(int& x : v) cin >> x;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(a[i][j] == 1) {
                    DFS(a, i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
	return 0;
}