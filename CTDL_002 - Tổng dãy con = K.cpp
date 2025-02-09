#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int n, M;
int a[1000];

bool check(const vector<int>& b) {
	int sum = 0;
	for(int i = 0; i < n; i++) {
		if(b[i]) sum += a[i];
	}
	return sum == M;
}

int cnt = 0;
void Try(int i, vector<int>& b) {
	for(int j = 0; j <= 1; j++) {
		b[i] = j;
		if(i == n) {
			if(check(b)) {
				cnt++;
				for(int k = 0; k < n; k++) {
					if(b[k]) cout << a[k] << " ";
				}
				cout << endl;
			}
			return;
		}
		else Try(i + 1, b);
	}
}


int main() {
	cin >> n >> M;
	vector<int> b(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	Try(0, b);
	cout << cnt << endl;
	return 0;
}