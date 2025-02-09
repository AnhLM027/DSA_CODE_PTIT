#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool sinhHv(vector<int>& b, int n) {
	int i = n - 2;
	while(i >= 0 && b[i] > b[i + 1]) i--;
	if(i < 0) return false;
	else {
		int j = n - 1;
		while(b[i] > b[j]) j--;
		swap(b[i], b[j]);
		reverse(b.begin() + i + 1, b.end());
		return true;
	}
}

bool check(vector<char> a, vector<int> b, int cnt[]) {
	for(int i = 1; i < a.size() - 1; i++) {
		if(cnt[a[b[i]] - 'A'] && !cnt[a[b[i - 1]] - 'A'] && !cnt[a[b[i + 1]] - 'A']) return false; 
	}
	return true;
}

int main() {
	char Ch; cin >> Ch;
	vector<char> a;
	for(char i = 'A'; i <= Ch; i++) a.push_back(i);
	int n = a.size();
	vector<int> b(n);
	for(int i = 0; i < n; i++) b[i] = i;
	int cnt[26] = {0};
	cnt[0] = cnt['E' - 'A'] = 1;
	while(true) {
		if(check(a, b, cnt)) {
			for(int i = 0; i < n; i++) cout << a[b[i]];
			cout << endl;
		}
		
		if(!sinhHv(b, n)) break;
	}
	return 0;
}