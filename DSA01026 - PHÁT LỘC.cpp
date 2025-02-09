#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n;
vector<string> res;

void Try(int i, string s, char curChar, int cnt6) {
	if(i < n) {
		if(cnt6 < 3) Try(i + 1, s + "6", '6', cnt6 + 1);
		if(curChar != '8') Try(i + 1, s + "8", '8', 0);
	}
	else if(i == n && cnt6 <= 2) res.push_back("8" + s + "6");
}

int main() {
	cin >> n;
	n -= 2 ;
	Try(0, "", '8', 0);
	for(string s : res) cout << s << endl;
	return 0;
}