#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	vector<ll> a;
	queue<string> qe;
	qe.push("9");
	while(!qe.empty()) {
		string s = qe.front(); qe.pop();
		if(s.size() > 18) continue;
		a.push_back(stoll(s));
		qe.push(s + "0");
		qe.push(s + "9");
	}
	int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        int ind = 0;
        while(a[ind] % n != 0) ind++;
        cout << a[ind] << endl;
    }
	return 0;
}