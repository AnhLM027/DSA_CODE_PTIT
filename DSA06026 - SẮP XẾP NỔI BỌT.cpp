#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    int cnt = 1;
    int n; cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    for(int i = 0; i < n - 1; i++) {
        bool ok = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                ok = true;
                swap(a[j], a[j + 1]);
            }
        }
        if(!ok) break;
        cout << "Buoc " << cnt++ << ": ";
        for(int x : a) cout << x << " ";
        cout << endl;
    }
	return 0;
}