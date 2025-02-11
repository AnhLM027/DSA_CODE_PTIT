#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
	int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        queue<string> qe;
        qe.push("9");
        while(!qe.empty()) {
            string s = qe.front(); qe.pop();
            if(stoll(s) % n == 0) {
                cout << s << endl;
                break;
            }
            qe.push(s + "0");
            qe.push(s + "9");
        }
        cout << endl;
    }
	return 0;
}