#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int n, k;
vector<int> a;

void show(vector<int>& b) {
	for(int i = 1; i <= k; i++) {
		cout << a[b[i] - 1] << " ";	
	}
	cout << endl;
}

void Try(int i, vector<int>& b) {
	for(int j = b[i - 1] + 1; j <= n - k + i; j++) {
		b[i] = j;
		if(i == k) {
			show(b);
		}
		else Try(i + 1, b);
	}
}

int main() {
    cin >> n >> k;
    set<int> se;
    for(int i = 0; i < n; i++) {
		int x; cin >> x;
		se.insert(x);	
	}
    for(int x : se) a.push_back(x);
    n = a.size();
    vector<int> b(k + 1);
    for(int i = 1; i <= k; i++) b[i] = i;
    Try(1, b);
    return 0;
}
