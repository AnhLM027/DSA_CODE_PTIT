#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n, k;

void Try(int i, string& a, vector<string>& res) {
	for(int j = 0; j <= 1; j++) {
		a[i] = j + '0';
		if(i == n) {
			res.push_back("1" + a + "0");
			return;
		}
		else Try(i + 1, a, res);
	}
}

bool check(const string& a) {
	for(int i = 1; i < a.size(); i++) {
		if(a[i] == a[i - 1] && a[i] == '1') return false;
	}
	return true;
}

int main() {
	int tc; cin >> tc;
	while(tc--) {
		cin >> n;
		n -= 2;
		if(n == 0) {
			cout << "HA" << endl;
			continue;
		}
		string a(n, '0');
		vector<string> res;
		Try(0, a, res);
		
		for(auto& v : res) {
			if(check(v)) {
				for(char& x : v) {
					if(!(x - '0')) cout << "A";
					else cout << "H";
				}
				cout << endl;
			}
		}
	}
	return 0;
}