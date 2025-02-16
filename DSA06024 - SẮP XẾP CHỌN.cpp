#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int cnt = 1;
    int n; cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    int ind;
    for (int  i = 0; i < n - 1; i++) {
        ind = i; 
        for(int j = i + 1; j < n; j++) {
            if (a[j] < a[ind]) ind = j;
        }
        if (ind != i) swap(a[ind], a[i]);
        cout << "Buoc " << cnt++ << ": ";
        for(int x : a) cout << x << " ";
        cout << endl;
    }
	return 0;
}