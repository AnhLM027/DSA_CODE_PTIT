#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
    int tc; cin >> tc;
    while(tc--) {
		string s; cin >> s;
		int st = 0, end = 0;
		unordered_map<char, int> mp, cnt;
		
		for(int i = 0; i < s.size(); i++) {
			cnt[s[i]]++;
		}
		int cntChar = cnt.size();
		int ans = s.size();
		while(end < s.size()) {
			mp[s[end]]++;
			end++;
			if(mp.size() == cntChar) {
				while(st < end && mp.size() == cntChar) {
					mp[s[st]]--;
					if(mp[s[st]] == 0) mp.erase(s[st]);
					st++;
				}
				ans = min(ans, end - st + 1);
			}
		}
		cout << ans << endl;
	}
    return 0;
}