#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int cnt = 0;
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> res;
    for(int& x : a) cin >> x;
    for (int  i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
        res.push_back(vector<int>(a.begin(), a.begin() + i + 1));
    }
    for(int i = res.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for(int x : res[i]) cout << x << " ";
        cout << endl;
    }
	return 0;
}