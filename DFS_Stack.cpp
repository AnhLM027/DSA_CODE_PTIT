#include <iostream>
#include <vector>
using namespace std;

void DFS(int n, vector<vector<int>>& dske) {
    vector<bool> vis(n + 1, false);
    stack<int> st;
    vector<int> res;

    st.push(1);
    vis[1] = true;
    res.push_back(1);

    while (!st.empty()) {
        int u = st.top();
        st.pop();
        
        for (int t : dske[u]) {
            if (!vis[t]) {
                vis[t] = true;
                st.push(u);
                st.push(t);
                res.push_back(t);
                
                for (int x : res) cout << x << " ";
                cout << endl;
                break;
            }
        }
    }
}

int main() {
    int n; cin >> n;
    vector<vector<int>> dske(n + 1);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x; cin >> x;
            if (x) dske[i].push_back(j);
        }
    }
    DFS(n, dske);

    return 0;
}
