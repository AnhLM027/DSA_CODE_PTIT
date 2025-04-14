#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "LÊ MINH ANH"
#define MOD (int)(1e9 + 7)
ll LIMIT = (int)(sqrt(100000));

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int main() {
	int n; cin >> n;
	vector<pair<int, int>> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end(), cmp);
	priority_queue<int, vector<int>, greater<>> pq;
	for(int i = 0; i < n; i++) {
		if(pq.size() < a[i].first) pq.push(a[i].second);
		else if(a[i].second > pq.top()) {
			pq.pop();
			pq.push(a[i].second);
		}
	}
	ll sum = 0;
	while(!pq.empty()) {
		sum += pq.top(); pq.pop();
	}
	cout << sum << endl;
	return 0;
}