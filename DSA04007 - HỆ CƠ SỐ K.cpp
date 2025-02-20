#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
	int tc; cin >> tc;
	while(tc--) {
		int MOD; cin >> MOD;
		string s, t; cin >> s >> t;
		int l1 = s.size();
		int l2 = t.size();
		int len_max = max(l1, l2);
		reverse(s.begin(), s.end());
		reverse(t.begin(), t.end());
		string sum = "";
		int nho = 0;
		for(int i = 0; i < len_max; i++) {
			int a = i < l1 ? s[i] - '0' : 0;
			int b = i < l2 ? t[i] - '0' : 0;
			int num = a + b + nho;
			sum += to_string(num % MOD);
			nho = num / MOD;
		}
		if(nho) sum += "1";
		reverse(sum.begin(), sum.end());
		cout << sum << endl;
	}
	return 0;
}