#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    int n; cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x > 0) sum += (ll)x * 2;
    }
    cout << sum;
    return 0;
}