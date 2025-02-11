#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
	int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        queue<string> qe;
        qe.push("1");
        while(!qe.empty() && n > 0) {
            string s = qe.front(); qe.pop();
            cout << s << " ";
            n--;
            if(s.size() <= n) {
                qe.push(s + "0");
                qe.push(s + "1");
            }
        }
        cout << endl;
    }
	return 0;
}