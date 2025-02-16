#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int main() {
    int cnt = 0;
    int n; cin >> n;
    vector<int> a(n);
    for(int& x : a) cin >> x;
    for (int  i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
        cout << "Buoc " << cnt++ << ": ";
        for(int j = 0; j <= i; j++) cout << a[j] << " ";
        cout << endl;
    }
	return 0;
}