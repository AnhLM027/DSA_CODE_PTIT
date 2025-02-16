#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    int tc = 1; cin >> tc;
    while(tc--) {
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
            res.push_back(a);
        }
        for(int i = res.size(); i >= 1; i--) {
            cout << "Buoc " << i << ": ";
            for(int x : res[i - 1]) cout << x << " ";
            cout << endl;
        }
    }
	return 0;
}