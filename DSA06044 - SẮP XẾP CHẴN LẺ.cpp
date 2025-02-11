#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int n; cin >> n;
    vector<int> a(n);
    vector<int> le, chan;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(i & 1) chan.push_back(a[i]);
        else le.push_back(a[i]);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<>());
    for(int i = 0; i < n / 2; i++) {
        cout << le[i] << " " << chan[i] << " ";
    }
    if(n & 1) cout << le[le.size() - 1];
	return 0;
}