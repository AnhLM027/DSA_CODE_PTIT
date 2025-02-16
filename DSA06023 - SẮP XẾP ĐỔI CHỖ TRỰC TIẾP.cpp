#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    int cnt = 1;
    int n; cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    vector<vector<int>> res;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << cnt++ << ": ";
        for(int x : a) cout << x << " ";
        cout << endl;
    }
	return 0;
}