#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		for(int i = 0; i < (1 << n); i++) {
			int x = i ^ (i >> 1);
			bitset<10> bit(x);
			string s = bit.to_string();
			for(int i = 10 - n; i < 10; i++) cout << s[i];
			cout << " ";
		}
		cout << endl;
	}
    return 0;
}