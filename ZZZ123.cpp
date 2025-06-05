#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"
#define MOD (int)(1e9 + 7)
#define maxn 105

int n, m;
int a[1005][1005] = {};
vector<ll> hcn(vector<int> h) {
    stack<int> st;
    ll Smax = 0;
    int x = 0, y = INT_MAX;
    ll i = 1;

    while(i <= m) {
        if(st.empty() || h[st.top()] <= h[i]) st.push(i++);
        else {
            ll cao = h[st.top()]; st.pop();
            if(st.empty()) {
                if(Smax < cao * (i - 1)) {
                    Smax = cao * (i - 1);
                    x = min(cao, i - 1);
                    y = max(cao, i - 1);
                }
                else if(Smax == cao * (i - 1)) {
                    if(abs(cao - i + 1) < y - x) {
                        x = min(cao, i - 1);
                        y = max(cao, i - 1);
                    }
                }
            }
            else {
                if(Smax < cao * (i - st.top() - 1)) {
                    Smax = cao * (i -st.top() - 1);
                    x = min(cao, i - st.top() - 1);
                    y = max(cao, i - st.top() - 1);
                }
                else if(Smax == cao * (i - st.top() - 1)) {
                    if(abs(cao - i + st.top() + 1) < y - x) {
                        x = min(cao, i - st.top() - 1);
                        y = max(cao, i - st.top() - 1);
                    }
                }
            }
        }
    }
    while(!st.empty()) {
        ll cao = h[st.top()]; st.pop();
        if(st.empty()) {
            if(Smax < cao * m) {
                Smax = cao * m;
                x = min(cao, (ll)m);
                y = max(cao, (ll)m);
            }
            else if(Smax == cao * m) {
                if(abs(cao - m) < y - x) {
                    x = min(cao, (ll)m);
                    y = max(cao, (ll)m);
                }
            }
        }
        else {
            if(Smax <= cao * (m - st.top())) {
                Smax = cao * (m - st.top());
                x = min(cao, (ll)m - st.top());
                y = max(cao, (ll)m - st.top());
            }
            else if(Smax <= cao * (m - st.top())) {
                Smax = cao * (m - st.top());
                if(abs(cao - m + st.top()) < y - x) {
                    x = min(cao, (ll)m - st.top());
                    y = max(cao, (ll)m - st.top());
                }
            }
        }
    }
    return {Smax, min(x, y), max(x, y)};
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int tc; cin >> tc;
    while(tc--) {
        cin >> n >> m;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        
        vector<vector<int>> h(n + 1, vector<int>(m + 1, 0));

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(i == 1) h[i][j] = a[i][j];
                else if(a[i][j] == 0) h[i][j] = 0;
                else h[i][j] = h[i - 1][j] + 1;
            }
        }

        pair<int, int> ans;
        ll Smax = 0;
        for(int i = 1; i <= n; i++) {
            vector<ll> S = hcn(h[i]);
            if(S[0] > Smax) {
                Smax = S[0];
                ans = {S[1], S[2]};
            }
            else if(S[0] == Smax) {
                if(S[2] - S[1] < ans.second - ans.first) {
                    ans.second = S[2];
                    ans.first = S[1];
                }
            }
        }
        cout << ans.first << " " << ans.second << "\n";
    }
    
    cerr << "Execution Time: " << 0.001 * clock() << "s\n";
	return 0;
}