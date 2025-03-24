#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int solve(vector<vector<int>> a) {
	int n = a.size();
	int res = 0;
	int med = a[n / 2][0];
	for(int i = 0; i < n; i++) res += abs(a[i][0] - med);
	int val = a[n / 2][1] + 1;
	for(int i = n / 2 + 1; i < n; i++) {
		res += abs(a[i][1] - val);
		val++;
	}
	val = a[n / 2][1] - 1;
	for(int i = n / 2 - 1; i >= 0; i--) {
		res += abs(a[i][1] - val);
		val--;
	}
	return res;
}

int main() {
    int n; cin >> n;
	vector<vector<int>> a(n, vector<int>(2)), b(n, vector<int>(2));
	for(int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		a[i][0] = b[i][1] = x;
		a[i][1] = b[i][0] = y;
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int res = 0;
	cout << min(solve(a), solve(b));

    return 0;
}