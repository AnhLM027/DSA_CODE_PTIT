#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


int n, k;
vector<vector<int>> res;

bool check(vector<int> a) {
	int cnt = 0;
	for(int i = 0; i < a.size() - k + 1; i++) {
		vector<int> b(a.begin() + i, a.begin() + i + k);
		if(b == vector<int>(k, 0)) cnt++;
		if(cnt > 1) return false;
	}
	return cnt == 1;
}

void Try(int i, vector<int>& a) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j;
		if(i == n) {
			if(check(a)) res.push_back(a);
			return;
		}
		else Try(i + 1, a);
	}
}

int main() {
	cin >> n >> k;
	vector<int> a(n, 0);
	Try(0, a);
	cout << res.size() << endl;
	for(auto v : res) {
		for(int x : v) {
			if(!x) cout << 'A';
			else cout << 'B';	
		}
		cout << endl;
	}
	return 0;
}