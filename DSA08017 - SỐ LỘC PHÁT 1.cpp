#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int n; cin >> n;
        queue<string> qe;
        qe.push("6");
        qe.push("8");
        vector<string> res;
        while(!qe.empty()) {
            string s = qe.front(); qe.pop();
            if(s.size() > n) continue;
            res.push_back(s);
            qe.push(s + "6");
            qe.push(s + "8");
        }
        for(int i = res.size() - 1; i >= 0; i--) cout << res[i] << " ";
        cout << endl;
    }
	return 0;
}