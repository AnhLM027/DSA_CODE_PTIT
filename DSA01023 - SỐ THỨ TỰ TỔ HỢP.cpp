#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


ll gt(int n) {
    if(n <= 1) return 1;
    return (ll)n * gt(n - 1);
}

bool prev_combination(vector<int>& a, int n, int k) {
    int i = k;
    while(i >= 1 && a[i] == n - k + i) i--;
    if(i == 0) return false;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
    return true;
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, k; cin >> n >> k;
		vector<int> a(k + 1);
		for(int i = 1; i <= k; i++) cin >> a[i];
		int cnt = 0;
		while(prev_combination(a, n, k)) {
            cnt++;
        }
		cout << gt(n) / (gt(k) * gt(n - k)) - cnt << endl;
    }
    return 0;
}