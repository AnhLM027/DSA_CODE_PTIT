#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        string s; cin >> s;
        ll sum = 0;
        for(int i = 0; i < s.size(); i++) {
            string t = "";
            for(int j = i; j < s.size(); j++) {
                t += s[j];
                sum += stoll(t);
            }
            
        }
        cout << sum << endl;
    }
    return 0;
}