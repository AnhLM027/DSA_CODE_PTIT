#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


char s;
int n;

void Try(char x, string t) {
	for (int j = x; j <= s; j++) {
		t += char(j);
		if(t.length() == n) {
			cout << t << endl;
		}
		else Try(j, t);
		t.pop_back();
	}
}

int main() {
	cin >> s >> n;
	Try('A', "");
	return 0;
}