#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(100000));

/*
1 2 1 1 1 1 1 1 1 1 
85 185 185 185 190 96 96 96 95 93 
40 40 40 93 136 82 40 40 40 40 
115 666 215 215 214 205 205 154 105 106 
16 113 19 20 114 20 20 19 19 16 
107 105 100 101 101 197 200 200 200 200 
413 1133 503 503 503 502 502 417 402 412 
196 512 186 104 87 93 97 97 142 196 
398 1375 398 398 405 499 499 495 488 471 
294 1256 296 296 296 296 287 286 286 247 
*/

vector<int> cnt(int x) {
	vector<int> res(10, 0);
	int num = 1;
	while(x >= num) {
		int low = x % num;
		int cur = (x / num) % 10;
		int high = x / (num * 10);
		for(int i = 0; i <= 9; i++) {
			res[i] += high * num;
		}
		for(int i = 0; i < cur; i++) {
			res[i] += num;
		}
		res[cur] += low + 1;
		if(num >= 1) res[0] -= num;
		num *= 10;
	}
	return res;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		int l, r; cin >> l >> r;
		vector<int> x = cnt(l - 1);
		vector<int> y = cnt(r);
		for(int i = 0; i <= 9; i++) {
			cout << y[i] - x[i] << " ";
		}
		cout << endl;
	}
	return 0;
}