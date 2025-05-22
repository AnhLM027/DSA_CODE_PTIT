#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 1005


int main() {
    int tc; cin >> tc;
    while(tc--) {
        int V, E; cin >> V >> E;
        int vao[maxn] = {}, ra[maxn] = {};

        for(int i = 1; i <= E; i++) {
            int x, y; cin >> x >> y;
            ra[x]++, vao[y]++;
        }

        int check = 1;
        for(int i = 1; i <= V; i++) {
            if(vao[i] != ra[i]) check = 0;
        }

        cout << check << endl;
    }
    return 0;
}