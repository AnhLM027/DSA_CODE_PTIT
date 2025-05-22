#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005

vector<vector<int>> res;

void DFS(int i, vector<int> v) {
    if(i == 4) {
        res.push_back(v);
        return;
    }
    for(int j = -1; j <= 1; j++) {
        v.push_back(j);
        DFS(i + 1, v);
        v.pop_back();
    }
}

int main() {
    DFS(0, {});

	int tc; cin >> tc;
    while(tc--) {
        vector<int> a(5);
        for(int& x : a) cin >> x;
        
        sort(a.begin(), a.end());
        
        bool check = false;
        do {
            for(auto v : res) {
                int cur = a[0];
                for(int i = 0; i < 4; i++) {
                    if(v[i] == 0) cur *= a[i + 1];
                    else cur += a[i + 1] * v[i];
                }
                
                if(cur == 23) {
                    check = true;
                    break;
                }
            }
            if(check) break;
            
        } while(next_permutation(a.begin(), a.end()));

        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}