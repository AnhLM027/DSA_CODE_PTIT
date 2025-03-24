#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


void DFS(const vector<int> dske[], int u, vector<bool>& vis) {
	vis[u] = true;
	for(auto v : dske[u]) {
		if(!vis[v]) DFS(dske, v, vis);
	}
}

int main() {
	int V; cin >> V;
    int cnt = 0;
    vector<bool> vis(V + 10);
    vector<int> dske[V + 10];
    for(int i = 1; i <= V; i++) {
        for(int j = 1; j <= V; j++) {
            int x; cin >> x;
            if(x) {
                dske[i].push_back(j);
                dske[j].push_back(i);
            }
        }
    }
    for(int i = 1; i <= V; i++) {
        if(vis[i]) continue;
        DFS(dske, i, vis);
        cnt++;
    }
    cout << cnt << endl;
	return 0;
}