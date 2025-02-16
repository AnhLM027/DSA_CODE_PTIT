#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
    vector<long long int> a;
    queue<string> qe;
    qe.push("1");
    while(!qe.empty()) {
        string s = qe.front(); qe.pop();
        if(s.size() > 19) continue;
        a.push_back(stoull(s));
        qe.push(s + "0");
        qe.push(s + "1");
    }
    
	int tc; cin >> tc;
    while(tc--) {
        long long int n; cin >> n;
        int ind = 0;
        while(a[ind] % n != 0) ind++;
        cout << a[ind] << endl;
    }
	return 0;
}