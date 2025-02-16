#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int q; cin >> q;
        queue<int> qe;
        while(q--) {
            int k; cin >> k;
            if(k == 1) cout << qe.size() << endl;
            else if(k == 2) {
                if(qe.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            else if(k == 3) {
                int n; cin >> n;
                qe.push(n);
            }
            else if(k == 4) {
                if(!qe.empty()) qe.pop();
            }
            else if(k == 5) {
                if(!qe.empty()) cout << qe.front() << endl;
                else cout << "-1" << endl;
            }
            else if(k == 6) {
                if(!qe.empty()) cout << qe.back() << endl;
                else cout << "-1" << endl;
            }
        }
    }
	return 0;
}