#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define AnhLM027 "Lê Minh Anh"


int main() {
    string s; cin >> s;
    int q; cin >> q;
    while(q--) {
        char c; cin >> c;
        if(c == 'q') {
            int l, r; cin >> l >> r;
            string t = s;
            reverse(t.begin() + l - 1, t.begin() + r);
            cout << (s == t ? "YES" : "NO") << endl;
        }
        else {
            int i; cin >> i;
            char a; cin >> a;
            s[i - 1] = a;
        }
    }
    return 0;
}

