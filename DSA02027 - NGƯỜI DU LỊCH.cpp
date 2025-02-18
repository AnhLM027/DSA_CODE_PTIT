#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"



int n, c[101][101], X[101], d = 0, ans = INT_MAX, cmin = INT_MAX;
bool visited[101] = {false};

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!visited[j]) {
            visited[j] = true;
            X[i] = j;
            d += c[X[i - 1]][X[i]];
            if (i == n) ans = min(ans, d + c[X[n]][X[1]]);
            else if (d + (n - i + 1) * cmin < ans) Try(i + 1);
            visited[j] = false;
            d -= c[X[i - 1]][X[i]];
        }
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> c[i][j];
            if (c[i][j] != 0) cmin = min(cmin, c[i][j]);
        }
	}
    X[1] = 1;
	visited[1] = true;
	Try(2);
	visited[1] = false;
    cout << ans;
    return 0;
}