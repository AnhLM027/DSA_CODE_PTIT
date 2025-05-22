#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

int main() {
	int n; cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;

    int dmax = *min_element(a.begin(), a.end());

    for(int d = dmax; d >= 1; d--) {
        bool ok = true;
        ll sum = 0;

        for(int i = 0; i < n; i++) {
            int Bi = a[i] / (d + 1) + 1;

            if(Bi > a[i] / d) {
                ok = false;
                break;
            }
        }

        if(ok) {
            for(int i = 0; i < n; i++) {
                sum += a[i] / (d + 1) + 1;
            }
            cout << sum << endl;
            break;
        }
    }
	return 0;
}