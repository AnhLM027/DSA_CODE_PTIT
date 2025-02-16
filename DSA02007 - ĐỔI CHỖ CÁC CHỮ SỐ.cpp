#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int k; cin >> k;
		string s; cin >> s;
		int cnt = 0;
		while(k > 0) {
			priority_queue<pair<char, int>> qp;
			for(int i = cnt; i < s.length(); i++) qp.push({s[i], i});
			if(!qp.empty() && s[cnt] != qp.top().first) {
				int j = qp.top().second;
				swap(s[cnt], s[j]);
				k--;
			}
			cnt++;
			if (cnt == s.length()) break;
		}
		cout << s << endl;
    }
}