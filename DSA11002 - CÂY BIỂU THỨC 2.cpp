#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int DFS(int i, vector<string> s) {
	if(s[i] == "+") return DFS(i * 2 + 1, s) + DFS(i * 2 + 2, s);
	else if(s[i] == "-") return DFS(i * 2 + 1, s) - DFS(i * 2 + 2, s);
	else if(s[i] == "*") return DFS(i * 2 + 1, s) * DFS(i * 2 + 2, s);
	else if(s[i] == "/") return DFS(i * 2 + 1, s) / DFS(i * 2 + 2, s);
	else return stoi(s[i]);
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<string> s(n);
		for(string& t : s) cin >> t;

		int ans = DFS(0, s);
		cout << ans << endl;
	}

	return 0;
}