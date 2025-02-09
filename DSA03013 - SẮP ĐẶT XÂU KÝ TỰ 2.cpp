#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int k; cin >> k;
		string s; cin >> s;
		int cnt[26] = {0};
		for(char c : s) cnt[c - 'A']++;
		int maxCnt = *max_element(cnt, cnt + 26);
		if((maxCnt - 1) * k >= s.size()) cout << "-1" << endl;
		else cout << "1" << endl;
	}
	return 0;
}