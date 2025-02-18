#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"



int n, c[101][101], X[101], d = 0, ans, cmin;
bool visited[101];

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!visited[j]) {
            visited[j] = true;
            X[i] = j;
            d += c[X[i - 1]][X[i]];
            if (i == n) ans = min(ans, d);
            else if (d + (n - i + 1) * cmin < ans) Try(i + 1);
            visited[j] = false;
            d -= c[X[i - 1]][X[i]];
        }
    }
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		cin >> n;
		d = 0;
		ans = cmin = INT_MAX;
		for(int i = 0; i < 100; i++) visited[i] = false;
		for(int i = 1; i <= n; ++i) {
			for (int j = 1; j <= n; ++j) {
				cin >> c[i][j];
				if (c[i][j] != 0) cmin = min(cmin, c[i][j]);
			}
		}
		for(int city = 1; city <= n; city++) {
			X[1] = city;
			visited[city] = true;
			Try(2);
			visited[city] = false;
		}
		cout << ans << endl;
	}
    return 0;
}