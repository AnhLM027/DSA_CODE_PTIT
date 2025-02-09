#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;
		int j = s.size() - 1;
		while(j >= 0 && s[j] == '0') j--;
		if(j < 0) {
			cout << string(s.size(), '1') << endl;
		}
		else {
			s[j] = '0';
			for(int i = j + 1; i < s.size(); i++) s[i] = '1';
			cout << s << endl;
		}
	}
	return 0;
}