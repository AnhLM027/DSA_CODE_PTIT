#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		string s; cin >> s;
		int sz = s.size();
		bitset<10> bit(s);
		int n = bit.to_ulong();
		int mask = n;
		while(mask) {
			mask >>= 1;
			n ^= mask;
		}
		bitset<10> bit2(n);
		s = bit2.to_string();
		for(int i = 10 - sz; i < 10; i++) cout << s[i];
		cout << endl;
	}
    return 0;
}