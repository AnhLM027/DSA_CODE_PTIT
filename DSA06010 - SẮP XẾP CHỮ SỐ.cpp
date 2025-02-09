#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD (int)(1e9 + 7)

#define AnhLM027 "Le Minh Anh"

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        int cnt[26] = {0};
        for(int i = 0; i < n; i++) {
            string s; cin >> s;
            for(char c : s) cnt[c - '0'] = 1;
        }
        for(int i = 0; i < 26; i++) {
            if(cnt[i]) cout << i << " ";
        }
        cout << endl;
	}
	return 0;
}
