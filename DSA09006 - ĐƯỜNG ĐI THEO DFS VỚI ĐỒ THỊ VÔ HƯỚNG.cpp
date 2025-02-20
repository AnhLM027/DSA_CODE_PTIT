#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


bool visited[10000];

bool DFS(int u, int t, vector<int> ke[], vector<int>& res) {
	res.push_back(u);
	visited[u] = true;
	if(u == t) return true;
	for(int i : ke[u]) {
		if(!visited[i]) {
			if(DFS(i, t, ke, res)) return true;
		}
	}
	res.pop_back();
	return false;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		memset(visited, false, sizeof(visited));
		int V, E, u, t; cin >> V >> E >> u >> t;
		vector<int> ke[10000];
		for (int i = 0; i < E; i++) {
			int a, b; cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		vector<int> res;
		if(DFS(u, t, ke, res)) {
			for(int x : res) cout << x << " ";
		}
		else cout << "-1";
		cout << endl;
	}
}