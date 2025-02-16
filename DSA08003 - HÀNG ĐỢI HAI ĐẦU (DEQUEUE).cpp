#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int q; cin >> q;
    deque<int> qe;
    while(q--) {
        string s; cin >> s;
        if(s == "PUSHBACK") {
            int n; cin >> n;
            qe.push_back(n);
        }
        else if(s == "PUSHFRONT") {
            int n; cin >> n;
            qe.push_front(n);
        }
        else if(s == "PRINTFRONT") {
            if(!qe.empty()) cout << qe.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "PRINTBACK") {
            if(!qe.empty()) cout << qe.back() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POPFRONT") {
            if(!qe.empty()) qe.pop_front();
        }
        else if(s == "POPBACK") {
            if(!qe.empty()) qe.pop_back();
        }
    }
	return 0;
}