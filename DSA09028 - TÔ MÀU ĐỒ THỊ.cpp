#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105



int main() {
    int tc; cin >> tc;
	while(tc--) {
		int V, E, M;
		int colors[maxn];
		vector<int> dske[maxn];
		cin >> V >> E >> M;
		
		for(int i = 1; i <= E; i++) {
			int x, y; cin >> x >> y;
			dske[x].push_back(y);
			dske[y].push_back(x);
		}
		
		vector<int> a;
		for(int i = 1; i <= V; i++) a.push_back(i);

		sort(a.begin(), a.end(), [&](int b, int c) -> bool {
			return dske[b].size() > dske[c].size();
		});
		
		int color = 1;
		while(a.size()) {
			int u = a[0];
			colors[u] = color;

			vector<int> b;
			for(int i = 0; i < a.size(); i++) {
				if(a[i] == u) continue;

				bool check = true;
				for(int v : dske[a[i]]) {
					if(v == u) check = false;
				}

				if(check) colors[a[i]] = color;
				else {
					b.push_back(a[i]);
				}
			}
			color++;
			a = b;
		}
		if(color - 1 <= M) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}