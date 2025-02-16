#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


vector<vector<int>> res;
vector<int> b;

void Try(int i, int sum, int n) {
	if(sum <= 0) {
		if(sum == 0) {
			vector<int> c = b;
			sort(c.begin(), c.end(), greater<>());
			res.push_back(c);
		}
		return;
	}
	for(int j = n; j >= i; j--) {
		b.push_back(j);
		Try(j, sum - j, n);
		b.pop_back();
	}
}

bool cmp(vector<int> a, vector<int> b){
	int i = 0;
	while(a[i] == b[i]) i++;
	return a[i] > b[i];
}

int main() {
	int tc; cin >> tc;
    while(tc--) {
		res.clear();
		b.clear();
        int n; cin >> n;
		Try(1, n, n);
		sort(res.begin(), res.end(), cmp);
		for(auto v : res) {
			cout << "(";
			for(int i = 0; i < v.size(); i++) {
				cout << v[i];
				if(i != v.size() - 1) cout << " ";
			}
			cout << ") ";
		}
		cout << endl;
    }
	return 0;
}