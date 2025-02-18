#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool snt(int n) {
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return false;
	}
	return n >= 2;
}

void Try(int i, string s, string t) {
	if(t.size() > 0) cout << t << " ";
	for(int j = i + 1; j < s.size(); j++) {
		t += s[j];
		Try(j, s, t);
		t.pop_back();
	}
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		string s; cin >> s;
		Try(-1, s, "");
		cout << endl;
	}
	return 0;
}