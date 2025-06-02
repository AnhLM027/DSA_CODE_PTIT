#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define AnhLM027 "Lê Minh Anh"

int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        vector<pair<int, int>> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }

        sort(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b) -> bool{
            return a.second < b.second;
        });
        
        vector<int> dp(n + 1, 1);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(a[j].second < a[i].first) dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        cout << *max_element(dp.begin(), dp.end()) << endl;
    }

    return 0;
}

