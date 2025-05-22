#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"



int main() {
	int n, m; cin >> n >> m;
	char a[105][105];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
	int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
	
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i][j] == 'W') {
				cnt++;
				queue<pair<int, int>> qe;
				qe.push({i, j});

				while(!qe.empty()) {
					auto [x, y] = qe.front(); qe.pop();
					
					for(int i = 0; i < 8; i++) {
						int x1 = x + dx[i];
						int y1 = y + dy[i];
						if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && a[x1][y1] == 'W') {
							qe.push({x1, y1});
							a[x1][y1] = '.';
						}
					}
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}