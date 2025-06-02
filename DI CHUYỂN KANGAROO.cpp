#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M, K;
        string S;
        cin >> N >> M >> K >> S;

        // Build relative path offsets (including start at (0,0))
        vector<pair<int,int>> rel;
        rel.reserve(S.size() + 1);
        int x = 0, y = 0;
        rel.emplace_back(0, 0);
        int xmin = 0, xmax = 0, ymin = 0, ymax = 0;
        for (char c : S) {
            if (c == 'U') --x;
            else if (c == 'D') ++x;
            else if (c == 'L') --y;
            else ++y;
            rel.emplace_back(x, y);
            xmin = min(xmin, x);
            xmax = max(xmax, x);
            ymin = min(ymin, y);
            ymax = max(ymax, y);
        }

        // Compute safe-start rectangle [a..b] x [c..d]
        int a = max(0, -xmin);
        int b = min(N - 1, N - 1 - xmax);
        int c = max(0, -ymin);
        int d = min(M - 1, M - 1 - ymax);
        ll safeStarts = max(0LL, b - a + 1LL) * max(0LL, d - c + 1LL);

        // Build 2D difference array on unique offsets
        sort(rel.begin(), rel.end());
        rel.erase(unique(rel.begin(), rel.end()), rel.end());
        vector<vector<ll>> diff(N + 1, vector<ll>(M + 1, 0));

        for (auto [dx, dy] : rel) {
            int x1 = max(0, a + dx);
            int y1 = max(0, c + dy);
            int x2 = min(N - 1, b + dx);
            int y2 = min(M - 1, d + dy);
            if (x1 > x2 || y1 > y2) continue;
            diff[x1][y1] += 1;
            if (x2 + 1 <= N) diff[x2 + 1][y1] -= 1;
            if (y2 + 1 <= M) diff[x1][y2 + 1] -= 1;
            if (x2 + 1 <= N && y2 + 1 <= M) diff[x2 + 1][y2 + 1] += 1;
        }

        // 2D prefix sum → visits grid
        vector<vector<ll>> visits(N, vector<ll>(M, 0));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                ll v = diff[i][j];
                if (i > 0) v += visits[i - 1][j];
                if (j > 0) v += visits[i][j - 1];
                if (i > 0 && j > 0) v -= visits[i - 1][j - 1];
                visits[i][j] = v;
            }
        }

        // Count holes where survivors == K
        ll ans = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                if (safeStarts - visits[i][j] == K)
                    ans++;

        cout << ans << "\n";
    }

    return 0;
}