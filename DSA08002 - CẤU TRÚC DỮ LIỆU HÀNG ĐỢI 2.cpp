#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int q; cin >> q;
    queue<int> qe;
    while(q--) {
        string s; cin >> s;
        if(s == "PUSH") {
            int n; cin >> n;
            qe.push(n);
        }
        else if(s == "PRINTFRONT") {
            if(!qe.empty()) cout << qe.front() << endl;
            else cout << "NONE" << endl;
        }
        else {
            if(!qe.empty()) qe.pop();
        }
    }
	return 0;
}