#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        string s; cin >> s;
        cout << n << " ";
        if(next_permutation(s.begin(), s.end())) {
            cout << s << endl;
        }
        else cout << "BIGGEST" << endl;
    }
}