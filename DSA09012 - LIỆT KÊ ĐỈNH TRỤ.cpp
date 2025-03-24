#include <bits/stdc++.h>
using namespace std;

#define AnhLM027 "Le Minh Anh"


vector<int> ke[1001];
bool visited[1001];
string res;
int V, E, u, v;
int cnt;

void BFS(int a) {
    visited[a] = true;
    for (int i : ke[a]) {
        if(!visited[i]) BFS(i);
    }
}

int tplt() {
    cnt = 0;
    for (int i = 1; i <= V; i++) {
        if (!visited[i]) {
            BFS(i);
			cnt++;
        }
    }
    return cnt;
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < 1000; i++) ke[i].clear();
        
		cin >> V >> E;
        for (int i = 0; i < E; i++) {
            int a, b; cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int cnt1 = tplt();
        for (int i = 1; i <= V; i++) {
            memset(visited, false, sizeof(visited));
            visited[i] = true;
            if (cnt1 < tplt()) cout << i << " ";
        }
        cout << endl;
    }
}