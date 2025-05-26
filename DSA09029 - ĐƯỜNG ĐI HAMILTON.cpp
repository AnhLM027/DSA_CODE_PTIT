#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 15


int V, E;
vector<int> dske[maxn];
bool vis[maxn] = {};
bool check = false;

void DFS(int u, int cnt) {
	if(check) return;
	if(cnt == V) {
		check = true;
		return;
	}
	
	for(int v : dske[u]) {
		if(!vis[v]) {
			vis[v] = true;
			DFS(v, cnt + 1);
			vis[v] = false;
		}
	}
}

void check_Hamilton() {
	for(int i = 1; i <= V; i++) {
		memset(vis, false, sizeof(vis));
		vis[i] = true;
		DFS(i, 1);
	}
	cout << check << endl;
}

int main() {
    int tc; cin >> tc;
	while(tc--) {
		for(int i = 1; i < maxn; i++) dske[i].clear();
		check = false;

		cin >> V >> E;
		for(int i = 1; i <= E; i++) {
			int x, y; cin >> x >> y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}
		
		check_Hamilton();
	}
	
	return 0;
}