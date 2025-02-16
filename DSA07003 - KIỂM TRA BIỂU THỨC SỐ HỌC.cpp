#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
    int tc; cin >> tc;
    while(tc--) {
        string s; cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for(char c : s) {
            if(c == '+' || c == '-') cnt1++;
            else if(c == '(') cnt2++;
        }
        if(cnt1 != cnt2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
	return 0;
}