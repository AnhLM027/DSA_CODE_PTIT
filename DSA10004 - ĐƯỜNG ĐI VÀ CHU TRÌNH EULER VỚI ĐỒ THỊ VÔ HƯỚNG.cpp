#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int V, E; cin >> V >> E;
        int cnt[maxn] = {};

        for(int i = 1; i <= E; i++) {
            int x, y; cin >> x >> y;
            cnt[x]++;
            cnt[y]++;
        }

        int check = 0;
        for(int x : cnt) check += x & 1;

        if(check == 0) cout << "2" << endl;
        else if(check == 2) cout << "1" << endl;
        else cout << "0" << endl;
    }
    return 0;
}