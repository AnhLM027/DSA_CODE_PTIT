#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


bool visited[10000];

void DFS(int u, vector<int> ke[]) {
	cout << u << " ";
	visited[u] = true;
	for(int i : ke[u]) {
		if(!visited[i]) DFS(i, ke);
	}
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		memset(visited, false, sizeof(visited));
		int V, E, u; cin >> V >> E >> u;
		vector<int> ke[10000];
		for (int i = 0; i < E; i++) {
			int a, b; cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		DFS(u,ke);
		cout << endl;
	}
}