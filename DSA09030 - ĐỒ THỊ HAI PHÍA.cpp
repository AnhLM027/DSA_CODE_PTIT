#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005


int V, E;
int colors[maxn];
vector<int> dske[maxn];

bool BFS(int st) {
	queue<int> qe;
	qe.push(st);
	
	colors[st] = 0;
	while(!qe.empty()) {
		int u = qe.front(); qe.pop();

		for(int v : dske[u]) {
			if(colors[v] == -1) {
				colors[v] = 1 - colors[u];
				qe.push(v);
			}
			else if(colors[v] == colors[u]) return false;
		}
	}
	return true;
}

bool check() {
	fill(colors, colors + maxn, -1);
	for(int i = 1; i <= V; i++) {
		if(colors[i] == -1) {
			if(!BFS(i)) return false;
		}
	}
	return true;
}

int main() {
    int tc; cin >> tc;
	while(tc--) {
		for(int i = 1; i < maxn; i++) dske[i].clear();

		cin >> V >> E;
		
		for(int i = 1; i <= E; i++) {
			int x, y; cin >> x >> y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}

		if(check()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}