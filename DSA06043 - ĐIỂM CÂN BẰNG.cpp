#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int indSum(vector<int>& a, int n, int M) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        M -= a[i];
        if(sum == M) return i + 1;
        sum += a[i];
    }
    if(sum == M) return n;
    return -1;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << indSum(a, n, sum) << endl;
	}
	return 0;
}