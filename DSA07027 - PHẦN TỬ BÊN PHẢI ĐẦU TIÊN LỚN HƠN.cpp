#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        vector<int> a(n), b(n, -1);
        for(int& x : a) cin >> x;
        stack<pair<int, int>> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && st.top().first < a[i]) {
                b[st.top().second] = a[i];
                st.pop();
            }
            st.push({a[i], i});
        }
        for(int x : b) cout << x << " ";
        cout << endl;
    }
    return 0;
}