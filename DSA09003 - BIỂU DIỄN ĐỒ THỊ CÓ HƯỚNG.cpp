#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int V, E; cin >> V >> E;
        vector<int> dske[V + 1];
        for(int i = 0; i < E; i++) {
            int x, y; cin >> x >> y;
            dske[x].push_back(y);
        }
        for(int i = 1; i <= V; i++) {
            cout << i << ": ";
            for(int x : dske[i]) cout << x << " ";
            cout << endl;
        }
    }
	return 0;
}