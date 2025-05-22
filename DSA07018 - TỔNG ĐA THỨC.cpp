#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Lê Minh Anh"


void convert(string s, map<int, int>& mp) {
	for(int i = 0; i < s.size(); i++) {
		if(isdigit(s[i])) {
			int j = i;
			int num = 0;
			while(j < s.size() && isdigit(s[j])) {
				num = num * 10 + s[j] - '0';
				j++;
			}
			while(j < s.size() && !isdigit(s[j])) j++;

			int mu = 0;
			while(j < s.size() && isdigit(s[j])) {
				mu = mu * 10 + s[j] - '0';
				j++;
			}
			i = j;

			mp[mu] += num;
		}
		else continue;
	}
}

int main() {
	int tc; cin >> tc;
	cin.ignore();
	while(tc--) {
		string s, t;
		getline(cin, s);
		getline(cin, t);
		map<int, int> mp;
		convert(s, mp);
		convert(t, mp);
		vector<pair<int, int>> a(mp.begin(), mp.end());
		
		for(int i = a.size() - 1; i >= 0; i--) {
			cout << a[i].second << "*x^" << a[i].first;
			if(i != 0) cout << " + ";
		}
		cout << endl;
	}

	return 0;
}