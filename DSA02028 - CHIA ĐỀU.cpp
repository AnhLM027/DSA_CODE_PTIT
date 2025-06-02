#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"

#define maxn 105



void Try(int i, int k, int sum, int target, vector<int>& a, int& cnt) {
    if(i == a.size() && k == 0) {
		cnt++;
		return;
	}

	for(int j = i; j < a.size(); j++) {
		sum += a[j];
		if(sum == target) Try(j + 1, k - 1, 0, target, a, cnt);
	}
}


int main() {
    int n, k; cin >> n >> k;
	vector<int> a;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}

	int sum = accumulate(a.begin(), a.end(), 0);
	if(sum % k != 0) {
		cout << "0" << endl;
		return 0;
	}
	
	int target = sum / k;

	int cnt = 0;
	Try(0, k, 0, target, a, cnt);
	cout << cnt << endl;
	
	return 0;
}