#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool isPrime(int n) {
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return false;
	}
	return true;
}

void Try(int N, int i, int sum, const int& M, vector<vector<int>>& res, vector<int> b) {
	if(sum >= M || b.size() >= N) {
		if(sum == M && b.size() == N) res.push_back(b);
		return;
	}
	for(int j = i + 1; j <= M; j++) {
		if(isPrime(j)) {
			b.push_back(j);
			Try(N, j, sum + j, M, res, b);
			b.pop_back();
		}
	}
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int n, p, M; cin >> n >> p >> M;
		vector<vector<int>> res;
		vector<int> b;
		
		Try(n, p, 0, M, res, b);
		cout << res.size() << endl;
		for(auto v : res) {
			for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
			cout << endl;
		}
	}
	return 0;
}